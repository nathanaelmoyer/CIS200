using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_1
{
    class Program
    {
        static double totalEarnings = 0;
        static double taxTemp;
        static double totalTax, taxAt10, taxAt15, taxAt25, taxAt28, taxAt33, taxAt35, taxAt396;

        static void Main(string[] args)
        {
            string entryAsString;
            double entryAsDouble;

            Console.WriteLine("Welcome to your federal income tax calculator!");
            Console.WriteLine("Please enter the total taxable income for each W2.");
            do {
               entryAsString = Console.ReadLine();
               entryAsDouble = Convert.ToDouble(entryAsString);
                if (entryAsDouble != -1){
                    totalEarnings += entryAsDouble;
                }
            } while (entryAsDouble != -1);

            //using single bracket
            //first tax bracket
            taxTemp = totalEarnings;
            if (totalEarnings >= 418400)//39.6
            {
                taxAt396 = (taxTemp - 418400) * .396;
                taxAt35 = (418400 - 416700) * .35;
                taxAt33 = (416700 - 191650) * .33;
                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt396 + taxAt35 + taxAt33 + taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (totalEarnings >= 416700 && totalEarnings < 418400)//35
            {

            }
            else if (totalEarnings >= 191650 && totalEarnings < 416700)//33
            {

            }
            else if (totalEarnings >= 91900 && totalEarnings < 191650)//28
            {

            }
            else if (totalEarnings >= 37950 && totalEarnings < 91900)//25
            {

            }
            else if (totalEarnings >= 9325 && totalEarnings < 37950)//15
            {

            }
            else if (totalEarnings > 0 && totalEarnings < 9325)//10
            {

            }
            else if(totalEarnings <= 0)//no earnings
            {
                Console.WriteLine("You don't owe any taxes.");
            }
        }
    }
}