using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project_2
{
    public partial class Title : Form
    {
        double GrossIncome = 0, totalTax = 0, percentTaxOfGrossIncome, percentTaxOfAGI, taxBracket = 0, totalDeuctions = 0;
        double taxAt10 = 0, taxAt15 = 0, taxAt25 = 0, taxAt28 = 0, taxAt33 = 0, taxAt35 = 0, taxAt396 = 0;
        string entryAsString;
        bool deductionsChoice;

        string textFromIncomeAsString;
        double textFromIncomeAsDouble;

        //UI

        public Title()
        {
            InitializeComponent();
        }

        private void addToGross_Click(object sender, EventArgs e)
        {
            ClickOrEnterGrossIncome();
        }

        //private void addToGross_KeyPress(object sender, KeyPressEventArgs e) //trying to add enter key function
        //{
        //    // https://stackoverflow.com/questions/3558814/net-textbox-handling-the-enter-key
        //    if (e.KeyChar == (char)Keys.Return)
        //    {
        //        ClickOrEnter();
        //    }
        //}

        private void ClickOrEnterGrossIncome()
        {
            textFromIncomeAsString = grossIncome.Text;

            Double.TryParse(textFromIncomeAsString, out textFromIncomeAsDouble);

            addToGrossIncome(ref GrossIncome, textFromIncomeAsDouble);

            totalGrossIncomeLabel.Text = $"Total Gross Income: {GrossIncome}";

            grossIncome.Text = string.Empty;

            grossIncome.Focus();
        }

        static double addToGrossIncome(ref double GrossIncome, double input)
        {
            GrossIncome += input;
            return GrossIncome;
        }

        private void ClickOrEnterDeductions()
        {
            textFromIncomeAsString = deductionsTextBox.Text;

            Double.TryParse(textFromIncomeAsString, out textFromIncomeAsDouble);

            addToDeductions(ref totalDeuctions, textFromIncomeAsDouble);

            totalDeductionsLabel.Text = $"Total deductions: {totalDeuctions}";

            deductionsTextBox.Text = string.Empty;

            deductionsTextBox.Focus();
        }

        static double addToDeductions(ref double totalDeductions, double input)
        {
            totalDeductions += input;
            return totalDeductions;
        }

        private void deductionsButton_Click(object sender, EventArgs e)
        {
            ClickOrEnterDeductions();
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void grossIncome_TextChanged(object sender, EventArgs e)
        {
            

        }

        private void yesButton_CheckedChanged(object sender, EventArgs e)
        {
            if (yesButton.Checked)
            {
                deductionsLabel.Visible = false;
                deductionsTextBox.Visible = false;
                totalDeductionsLabel.Visible = false;
                deductionsButton.Visible = false;
                //reset deductions
                totalDeuctions = 0;
                totalDeductionsLabel.Text = $"Total deductions: ";

                //calculate things
            }
        }

        private void noButton_CheckedChanged(object sender, EventArgs e)
        {
            if (noButton.Checked)
            {
                deductionsLabel.Visible = true;
                deductionsTextBox.Visible = true;
                totalDeductionsLabel.Visible = true;
                deductionsButton.Visible = true;
            }
        }

        private void calculateTaxes_Click(object sender, EventArgs e) //calculate taxes and display them
        {
            totalTax = calculateTotalTaxesOwed(GrossIncome, ref taxBracket, ref taxAt10, ref taxAt15, ref taxAt25, ref taxAt28, ref taxAt33, ref taxAt35, ref taxAt396);

            percentTaxOfGrossIncome = calculatePercentOfGrossIncome(totalTax, GrossIncome);

            if (yesButton.Checked)
            {
                deductionsChoice = true;
            }
            else if (noButton.Checked)
            {
                deductionsChoice = false;
            }

            percentTaxOfAGI = calculatePercentOfAGI(GrossIncome, totalTax, taxBracket, deductionsChoice, totalDeuctions);

            
        }

        private void percentOfAGILabel_Click(object sender, EventArgs e)
        {

        }

        private void totalTaxesOwedLabel_Click(object sender, EventArgs e)
        {

        }

        private void percentOfGrossLabel_Click(object sender, EventArgs e)
        {

        }

        private void label10_Click(object sender, EventArgs e)
        {

        }

        private void label15_Click(object sender, EventArgs e)
        {

        }

        private void label25_Click(object sender, EventArgs e)
        {

        }

        private void label33_Click(object sender, EventArgs e)
        {

        }

        private void label35_Click(object sender, EventArgs e)
        {

        }

        private void label396_Click(object sender, EventArgs e)
        {

        }

        static double calculatePercentOfGrossIncome(double totalTax, double grossIncome)
        {
            return (totalTax / grossIncome) * 100;
        }






        //calculations

        static double calculatePercentOfAGI(double grossIncome, double totalTax, double taxBracket, bool deductionsChoice, double totalDeductions)
        {
            double standardDeduction = 6350, taxAfterDeduction, /*totalItemizedDeduction = totalDeductions*/, deductionEntry, percentTaxOfAGI = 0;
            string entryAsString;

            //itemize
            if (deductionsChoice == true)
            {
                taxAfterDeduction = totalTax;
                taxAfterDeduction -= (totalDeductions * taxBracket); //toatal tax after itemized deuction
                percentTaxOfAGI = (taxAfterDeduction / grossIncome) * 100;
            }
            //standard deuction
            else if (deductionsChoice == false)
            {
                taxAfterDeduction = totalTax;
                taxAfterDeduction -= (standardDeduction * taxBracket); //toatal tax after standard deuction
                percentTaxOfAGI = (taxAfterDeduction / grossIncome) * 100;
            }

            return percentTaxOfAGI;
        }

        static double calculateTotalTaxesOwed(double grossIncome, ref double taxBracket, ref double taxAt10, ref double taxAt15, ref double taxAt25, ref double taxAt28, ref double taxAt33, ref double taxAt35, ref double taxAt396)
        {
            double taxTemp;
            double totalTax = 0;

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

                taxAt35 = (taxTemp - 416700) * .35;
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

                taxAt33 = (taxTemp - 191650) * .33;
                taxAt28 = (191650 - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt33 + taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 91900 && grossIncome < 191650)//28
            {
                taxBracket = .28;

                taxAt28 = (taxTemp - 91900) * .28;
                taxAt25 = (91900 - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt28 + taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 37950 && grossIncome < 91900)//25
            {
                taxBracket = .25;

                taxAt25 = (taxTemp - 37950) * .25;
                taxAt15 = (37950 - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt25 + taxAt15 + taxAt10;
            }
            else if (grossIncome >= 9325 && grossIncome < 37950)//15
            {
                taxBracket = .15;

                taxAt15 = (taxTemp - 9325) * .15;
                taxAt10 = (9325 - 0) * .1;

                totalTax = taxAt15 + taxAt10;
            }
            else if (grossIncome > 0 && grossIncome < 9325)//10
            {
                taxBracket = .1;

                taxAt10 = (taxTemp - 0) * .1;

                totalTax = taxAt10;
            }

            return totalTax;
        }


    }
}
