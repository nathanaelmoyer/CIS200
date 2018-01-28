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
        static double totalTax, taxAt10, taxAt15, taxAt25, taxAt33, taxAt35, taxAt396;

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
            if (totalEarnings > 9325){
                taxTemp -= 9325;

            }
            else if(totalEarnings <= 9325){

            }
        }
    }
}