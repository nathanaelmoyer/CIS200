namespace Project_2
{
    partial class Title
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.grossIncome = new System.Windows.Forms.TextBox();
            this.deductionQuestion = new System.Windows.Forms.Label();
            this.totalGrossIncomeLabel = new System.Windows.Forms.Label();
            this.yesButton = new System.Windows.Forms.RadioButton();
            this.noButton = new System.Windows.Forms.RadioButton();
            this.yesOrNoGroup = new System.Windows.Forms.GroupBox();
            this.addToGross = new System.Windows.Forms.Button();
            this.deductionsLabel = new System.Windows.Forms.Label();
            this.deductionsTextBox = new System.Windows.Forms.TextBox();
            this.deductionsButton = new System.Windows.Forms.Button();
            this.totalDeductionsLabel = new System.Windows.Forms.Label();
            this.calculateTaxes = new System.Windows.Forms.Button();
            this.totalTaxesOwedLabel = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.label396 = new System.Windows.Forms.Label();
            this.label35 = new System.Windows.Forms.Label();
            this.label33 = new System.Windows.Forms.Label();
            this.label25 = new System.Windows.Forms.Label();
            this.label15 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.percentOfAGI = new System.Windows.Forms.Label();
            this.percentOfGrossLabel = new System.Windows.Forms.Label();
            this.yesOrNoGroup.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(336, 20);
            this.label1.TabIndex = 0;
            this.label1.Text = "Please enter your gross income from your W2s";
            // 
            // grossIncome
            // 
            this.grossIncome.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.grossIncome.Location = new System.Drawing.Point(16, 53);
            this.grossIncome.Name = "grossIncome";
            this.grossIncome.Size = new System.Drawing.Size(172, 26);
            this.grossIncome.TabIndex = 1;
            this.grossIncome.TextChanged += new System.EventHandler(this.grossIncome_TextChanged);
            // 
            // deductionQuestion
            // 
            this.deductionQuestion.AutoSize = true;
            this.deductionQuestion.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.deductionQuestion.Location = new System.Drawing.Point(12, 110);
            this.deductionQuestion.Name = "deductionQuestion";
            this.deductionQuestion.Size = new System.Drawing.Size(322, 20);
            this.deductionQuestion.TabIndex = 2;
            this.deductionQuestion.Text = "Do you want to use the standard deduction?";
            // 
            // totalGrossIncomeLabel
            // 
            this.totalGrossIncomeLabel.AutoSize = true;
            this.totalGrossIncomeLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.totalGrossIncomeLabel.Location = new System.Drawing.Point(302, 53);
            this.totalGrossIncomeLabel.Name = "totalGrossIncomeLabel";
            this.totalGrossIncomeLabel.Size = new System.Drawing.Size(156, 20);
            this.totalGrossIncomeLabel.TabIndex = 5;
            this.totalGrossIncomeLabel.Text = "Total Gross Income: ";
            // 
            // yesButton
            // 
            this.yesButton.AutoSize = true;
            this.yesButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.yesButton.Location = new System.Drawing.Point(6, 19);
            this.yesButton.Name = "yesButton";
            this.yesButton.Size = new System.Drawing.Size(55, 24);
            this.yesButton.TabIndex = 6;
            this.yesButton.TabStop = true;
            this.yesButton.Text = "Yes";
            this.yesButton.UseVisualStyleBackColor = true;
            this.yesButton.CheckedChanged += new System.EventHandler(this.yesButton_CheckedChanged);
            // 
            // noButton
            // 
            this.noButton.AutoSize = true;
            this.noButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.noButton.Location = new System.Drawing.Point(111, 19);
            this.noButton.Name = "noButton";
            this.noButton.Size = new System.Drawing.Size(47, 24);
            this.noButton.TabIndex = 7;
            this.noButton.TabStop = true;
            this.noButton.Text = "No";
            this.noButton.UseVisualStyleBackColor = true;
            this.noButton.CheckedChanged += new System.EventHandler(this.noButton_CheckedChanged);
            // 
            // yesOrNoGroup
            // 
            this.yesOrNoGroup.Controls.Add(this.yesButton);
            this.yesOrNoGroup.Controls.Add(this.noButton);
            this.yesOrNoGroup.Location = new System.Drawing.Point(16, 133);
            this.yesOrNoGroup.Name = "yesOrNoGroup";
            this.yesOrNoGroup.Size = new System.Drawing.Size(318, 60);
            this.yesOrNoGroup.TabIndex = 8;
            this.yesOrNoGroup.TabStop = false;
            // 
            // addToGross
            // 
            this.addToGross.Location = new System.Drawing.Point(194, 56);
            this.addToGross.Name = "addToGross";
            this.addToGross.Size = new System.Drawing.Size(75, 23);
            this.addToGross.TabIndex = 9;
            this.addToGross.Text = "Add to gross";
            this.addToGross.UseVisualStyleBackColor = true;
            this.addToGross.Click += new System.EventHandler(this.addToGross_Click);
            // 
            // deductionsLabel
            // 
            this.deductionsLabel.AutoSize = true;
            this.deductionsLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.deductionsLabel.Location = new System.Drawing.Point(12, 205);
            this.deductionsLabel.Name = "deductionsLabel";
            this.deductionsLabel.Size = new System.Drawing.Size(251, 20);
            this.deductionsLabel.TabIndex = 10;
            this.deductionsLabel.Text = "Please enter all of your deductions";
            this.deductionsLabel.Visible = false;
            // 
            // deductionsTextBox
            // 
            this.deductionsTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.deductionsTextBox.Location = new System.Drawing.Point(16, 242);
            this.deductionsTextBox.Name = "deductionsTextBox";
            this.deductionsTextBox.Size = new System.Drawing.Size(172, 26);
            this.deductionsTextBox.TabIndex = 11;
            this.deductionsTextBox.Visible = false;
            // 
            // deductionsButton
            // 
            this.deductionsButton.Location = new System.Drawing.Point(194, 242);
            this.deductionsButton.Name = "deductionsButton";
            this.deductionsButton.Size = new System.Drawing.Size(102, 23);
            this.deductionsButton.TabIndex = 12;
            this.deductionsButton.Text = "Add to deductions";
            this.deductionsButton.UseVisualStyleBackColor = true;
            this.deductionsButton.Visible = false;
            this.deductionsButton.Click += new System.EventHandler(this.deductionsButton_Click);
            // 
            // totalDeductionsLabel
            // 
            this.totalDeductionsLabel.AutoSize = true;
            this.totalDeductionsLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.totalDeductionsLabel.Location = new System.Drawing.Point(302, 242);
            this.totalDeductionsLabel.Name = "totalDeductionsLabel";
            this.totalDeductionsLabel.Size = new System.Drawing.Size(134, 20);
            this.totalDeductionsLabel.TabIndex = 13;
            this.totalDeductionsLabel.Text = "Total deductions: ";
            this.totalDeductionsLabel.Visible = false;
            // 
            // calculateTaxes
            // 
            this.calculateTaxes.Location = new System.Drawing.Point(16, 350);
            this.calculateTaxes.Name = "calculateTaxes";
            this.calculateTaxes.Size = new System.Drawing.Size(112, 23);
            this.calculateTaxes.TabIndex = 14;
            this.calculateTaxes.Text = "Calculate Taxes";
            this.calculateTaxes.UseVisualStyleBackColor = true;
            this.calculateTaxes.Click += new System.EventHandler(this.calculateTaxes_Click);
            // 
            // totalTaxesOwedLabel
            // 
            this.totalTaxesOwedLabel.AutoSize = true;
            this.totalTaxesOwedLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.totalTaxesOwedLabel.Location = new System.Drawing.Point(6, 16);
            this.totalTaxesOwedLabel.Name = "totalTaxesOwedLabel";
            this.totalTaxesOwedLabel.Size = new System.Drawing.Size(143, 20);
            this.totalTaxesOwedLabel.TabIndex = 15;
            this.totalTaxesOwedLabel.Text = "Total Taxes Owed: ";
            this.totalTaxesOwedLabel.Visible = false;
            this.totalTaxesOwedLabel.Click += new System.EventHandler(this.totalTaxesOwedLabel_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.label396);
            this.groupBox1.Controls.Add(this.label35);
            this.groupBox1.Controls.Add(this.label33);
            this.groupBox1.Controls.Add(this.label25);
            this.groupBox1.Controls.Add(this.label15);
            this.groupBox1.Controls.Add(this.label10);
            this.groupBox1.Controls.Add(this.percentOfAGI);
            this.groupBox1.Controls.Add(this.percentOfGrossLabel);
            this.groupBox1.Controls.Add(this.totalTaxesOwedLabel);
            this.groupBox1.Location = new System.Drawing.Point(531, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(439, 350);
            this.groupBox1.TabIndex = 16;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "groupBox1";
            this.groupBox1.Visible = false;
            // 
            // label396
            // 
            this.label396.AutoSize = true;
            this.label396.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label396.Location = new System.Drawing.Point(6, 176);
            this.label396.Name = "label396";
            this.label396.Size = new System.Drawing.Size(130, 20);
            this.label396.TabIndex = 23;
            this.label396.Text = "Taxes at 39.6%:  ";
            this.label396.Visible = false;
            this.label396.Click += new System.EventHandler(this.label396_Click);
            // 
            // label35
            // 
            this.label35.AutoSize = true;
            this.label35.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label35.Location = new System.Drawing.Point(6, 156);
            this.label35.Name = "label35";
            this.label35.Size = new System.Drawing.Size(113, 20);
            this.label35.TabIndex = 22;
            this.label35.Text = "Taxes at 35%: ";
            this.label35.Visible = false;
            this.label35.Click += new System.EventHandler(this.label35_Click);
            // 
            // label33
            // 
            this.label33.AutoSize = true;
            this.label33.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label33.Location = new System.Drawing.Point(6, 136);
            this.label33.Name = "label33";
            this.label33.Size = new System.Drawing.Size(113, 20);
            this.label33.TabIndex = 21;
            this.label33.Text = "Taxes at 33%: ";
            this.label33.Visible = false;
            this.label33.Click += new System.EventHandler(this.label33_Click);
            // 
            // label25
            // 
            this.label25.AutoSize = true;
            this.label25.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label25.Location = new System.Drawing.Point(6, 116);
            this.label25.Name = "label25";
            this.label25.Size = new System.Drawing.Size(113, 20);
            this.label25.TabIndex = 20;
            this.label25.Text = "Taxes at 25%: ";
            this.label25.Visible = false;
            this.label25.Click += new System.EventHandler(this.label25_Click);
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label15.Location = new System.Drawing.Point(6, 96);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(113, 20);
            this.label15.TabIndex = 19;
            this.label15.Text = "Taxes at 15%: ";
            this.label15.Visible = false;
            this.label15.Click += new System.EventHandler(this.label15_Click);
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label10.Location = new System.Drawing.Point(6, 76);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(113, 20);
            this.label10.TabIndex = 18;
            this.label10.Text = "Taxes at 10%: ";
            this.label10.Visible = false;
            this.label10.Click += new System.EventHandler(this.label10_Click);
            // 
            // percentOfAGI
            // 
            this.percentOfAGI.AutoSize = true;
            this.percentOfAGI.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.percentOfAGI.Location = new System.Drawing.Point(6, 56);
            this.percentOfAGI.Name = "percentOfAGI";
            this.percentOfAGI.Size = new System.Drawing.Size(198, 20);
            this.percentOfAGI.TabIndex = 17;
            this.percentOfAGI.Text = "Taxes as a percent of AGI:";
            this.percentOfAGI.Visible = false;
            this.percentOfAGI.Click += new System.EventHandler(this.percentOfAGILabel_Click);
            // 
            // percentOfGrossLabel
            // 
            this.percentOfGrossLabel.AutoSize = true;
            this.percentOfGrossLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.percentOfGrossLabel.Location = new System.Drawing.Point(6, 36);
            this.percentOfGrossLabel.Name = "percentOfGrossLabel";
            this.percentOfGrossLabel.Size = new System.Drawing.Size(263, 20);
            this.percentOfGrossLabel.TabIndex = 16;
            this.percentOfGrossLabel.Text = "Taxes as a percent of gross income:";
            this.percentOfGrossLabel.Visible = false;
            this.percentOfGrossLabel.Click += new System.EventHandler(this.percentOfGrossLabel_Click);
            // 
            // Title
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1055, 484);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.calculateTaxes);
            this.Controls.Add(this.totalDeductionsLabel);
            this.Controls.Add(this.deductionsButton);
            this.Controls.Add(this.deductionsTextBox);
            this.Controls.Add(this.deductionsLabel);
            this.Controls.Add(this.addToGross);
            this.Controls.Add(this.yesOrNoGroup);
            this.Controls.Add(this.totalGrossIncomeLabel);
            this.Controls.Add(this.deductionQuestion);
            this.Controls.Add(this.grossIncome);
            this.Controls.Add(this.label1);
            this.Name = "Title";
            this.Text = "Single Tax Calculator 2017";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.yesOrNoGroup.ResumeLayout(false);
            this.yesOrNoGroup.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox grossIncome;
        private System.Windows.Forms.Label deductionQuestion;
        private System.Windows.Forms.Label totalGrossIncomeLabel;
        private System.Windows.Forms.RadioButton yesButton;
        private System.Windows.Forms.RadioButton noButton;
        private System.Windows.Forms.GroupBox yesOrNoGroup;
        private System.Windows.Forms.Button addToGross;
        private System.Windows.Forms.Label deductionsLabel;
        private System.Windows.Forms.TextBox deductionsTextBox;
        private System.Windows.Forms.Button deductionsButton;
        private System.Windows.Forms.Label totalDeductionsLabel;
        private System.Windows.Forms.Button calculateTaxes;
        private System.Windows.Forms.Label totalTaxesOwedLabel;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label percentOfAGI;
        private System.Windows.Forms.Label percentOfGrossLabel;
        private System.Windows.Forms.Label label396;
        private System.Windows.Forms.Label label35;
        private System.Windows.Forms.Label label33;
        private System.Windows.Forms.Label label25;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.Label label10;
    }
}

