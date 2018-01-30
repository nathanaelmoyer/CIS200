using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_1
{
    class Program
    {
       

        static void Main(string[] args)
        {
            double grossIncome = 0, totalTax = 0, percentTaxOfGrossIncome, percentTaxOfAGI, taxBracket = 0;
            string entryAsString, deductionsChoice;
            double entryAsDouble;

            //asking for information
            Console.WriteLine("Welcome to your federal income tax calculator!");
            Console.WriteLine("Please enter the total taxable income for each W2. Enter -1 when you are done.");
            do {
               entryAsString = Console.ReadLine();
               entryAsDouble = Convert.ToDouble(entryAsString);
                if (entryAsDouble != -1){
                    grossIncome += entryAsDouble;
                }
            } while (entryAsDouble != -1);

            //calculating total taxes
            if (grossIncome > 0)
            {
               totalTax = calculateTotalTaxesOwed(grossIncome, ref taxBracket);
            }
            else if(grossIncome <= 0)//no earnings
            {
                Console.WriteLine("You don't owe any taxes.");
            }

            //percent of tax for gross income
            percentTaxOfGrossIncome = (totalTax / grossIncome) * 100;

            //deductions
            Console.Write("Would you like to itemize deductions? Enter yes (itemize) or no (use standard deduction): ");
            deductionsChoice = Console.ReadLine();

            do
            {
                if (deductionsChoice != "yes" && deductionsChoice != "no" && deductionsChoice != "Yes" && deductionsChoice != "No" && deductionsChoice != "y" && deductionsChoice != "n")
                {
                    Console.Write("Please enter yes or no: ");
                    deductionsChoice = Console.ReadLine();
                }
            } while (deductionsChoice != "yes" && deductionsChoice != "no" && deductionsChoice != "Yes" && deductionsChoice != "No" && deductionsChoice != "y" && deductionsChoice != "n");

            calculatePercentOfAGI(grossIncome, totalTax, taxBracket, deductionsChoice);

        }

        static double calculatePercentOfAGI(double grossIncome, double totalTax, double taxBracket, string deductionsChoice)
        {
            double standardDeduction = 6350, taxAfterDeduction, totalItemizedDeduction = 0, deductionEntry, percentTaxOfAGI = 0;
            string entryAsString;

            //itemize
            if (deductionsChoice == "Yes" || deductionsChoice == "yes" || deductionsChoice == "y")
            {
                Console.WriteLine("Please enter all deductions. Enter -1 when you are done.");

                //adding up deductions
                do
                {
                    entryAsString = Console.ReadLine();
                    deductionEntry = Convert.ToDouble(entryAsString);

                    totalItemizedDeduction += deductionEntry;

                } while (deductionEntry != -1);

                taxAfterDeduction = totalTax;
                taxAfterDeduction -= (totalItemizedDeduction * taxBracket); //toatal tax after itemized deuction
                percentTaxOfAGI = (taxAfterDeduction / grossIncome) * 100;
            }
            //standard deuction
            else if (deductionsChoice == "No" || deductionsChoice == "no" || deductionsChoice == "n")
            {
                taxAfterDeduction = totalTax;
                taxAfterDeduction -= (standardDeduction * taxBracket); //toatal tax after standard deuction
                percentTaxOfAGI = (taxAfterDeduction / grossIncome) * 100;
            }

            return percentTaxOfAGI;
        }

        static double calculateTotalTaxesOwed(double grossIncome, ref double taxBracket)
        {
            double taxTemp;
            double totalTax = 0, taxAt10, taxAt15, taxAt25, taxAt28, taxAt33, taxAt35, taxAt396;

            //using single bracket from 2017
            taxTemp = grossIncome;

            if (grossIncome >= 418400)//39.6
            {
                taxBracket = .396;

                taxAt396 = (taxTemp - 418400) * .396;
                taxAt35 = (418400 - 416700) * .35;
                taxAt33 = (416700 - 191650) * .33;
                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt396 + taxAt35 + taxAt33 + taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 416700 && grossIncome < 418400)//35
            {
                taxBracket = .35;

                taxAt35 = (418400 - 416700) * .35;
                taxAt33 = (416700 - 191650) * .33;
                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt35 + taxAt33 + taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 191650 && grossIncome < 416700)//33
            {
                taxBracket = .33;

                taxAt33 = (416700 - 191650) * .33;
                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt33 + taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 91900 && grossIncome < 191650)//28
            {
                taxBracket = .28;

                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 37950 && grossIncome < 91900)//25
            {
                taxBracket = .25;

                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 9325 && grossIncome < 37950)//15
            {
                taxBracket = .15;

                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt15 + taxAt10;
            }
            else if (grossIncome > 0 && grossIncome < 9325)//10
            {
                taxBracket = .1;

                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt10;
            }

            return totalTax;
        }
    }
}