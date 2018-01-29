using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Title : Form
    {
        private int result;
        private Random random;
        public Title()
        {
            InitializeComponent();
            result = 4;
            random = new Random();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void GAYBUTTON_Click(object sender, EventArgs e)
        {
            // Label.Text += "Hello World!" + Environment.NewLine;

            HandleButtonOrEnter();
        }

        private void HandleButtonOrEnter()
        {
            string answer = answerBox.Text;

            int answerAsInt = Int32.Parse(answer);

            if (answerAsInt == result)
            {
                Right.Text = "Correct!";
                int firstNumber = random.Next(20);
                int secondNumber = random.Next(20);
                result = firstNumber + secondNumber;
                Label.Text = $"{firstNumber} + {secondNumber}"
                    + " = ?";

                // blank out the answer box
                answerBox.Text = string.Empty;

                // brings the cursor back to the answerBox so I can type
                answerBox.Focus();
            }
            else
            {
                Right.Text = "Wrong bb.";
            }
        }

        private void answerBox_TextChanged(object sender, EventArgs e)
        {

        }

        private void answerBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            // https://stackoverflow.com/questions/3558814/net-textbox-handling-the-enter-key
            if (e.KeyChar == (char)Keys.Return)
            {
                HandleButtonOrEnter();
            }
        }

        private void Label_Click(object sender, EventArgs e)
        {

        }
    }
}
