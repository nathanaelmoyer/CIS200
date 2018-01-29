namespace WindowsFormsApp1
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
            this.GAYBUTTON = new System.Windows.Forms.Button();
            this.Label = new System.Windows.Forms.Label();
            this.answerBox = new System.Windows.Forms.TextBox();
            this.Right = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // GAYBUTTON
            // 
            this.GAYBUTTON.Location = new System.Drawing.Point(258, 114);
            this.GAYBUTTON.Name = "GAYBUTTON";
            this.GAYBUTTON.Size = new System.Drawing.Size(120, 23);
            this.GAYBUTTON.TabIndex = 0;
            this.GAYBUTTON.Text = "CLICK IF GAY";
            this.GAYBUTTON.UseVisualStyleBackColor = true;
            this.GAYBUTTON.Click += new System.EventHandler(this.GAYBUTTON_Click);
            // 
            // Label
            // 
            this.Label.AutoSize = true;
            this.Label.Location = new System.Drawing.Point(99, 85);
            this.Label.Name = "Label";
            this.Label.Size = new System.Drawing.Size(43, 13);
            this.Label.TabIndex = 1;
            this.Label.Text = "2+2 = ?";
            this.Label.Click += new System.EventHandler(this.Label_Click);
            // 
            // answerBox
            // 
            this.answerBox.Location = new System.Drawing.Point(102, 116);
            this.answerBox.Name = "answerBox";
            this.answerBox.Size = new System.Drawing.Size(100, 20);
            this.answerBox.TabIndex = 2;
            this.answerBox.TextChanged += new System.EventHandler(this.answerBox_TextChanged);
            // 
            // Right
            // 
            this.Right.AutoSize = true;
            this.Right.Location = new System.Drawing.Point(390, 242);
            this.Right.Name = "Right";
            this.Right.Size = new System.Drawing.Size(0, 13);
            this.Right.TabIndex = 3;
            // 
            // Title
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(480, 233);
            this.Controls.Add(this.Right);
            this.Controls.Add(this.answerBox);
            this.Controls.Add(this.Label);
            this.Controls.Add(this.GAYBUTTON);
            this.Name = "Title";
            this.Text = "Fun Game";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button GAYBUTTON;
        private System.Windows.Forms.Label Label;
        private System.Windows.Forms.TextBox answerBox;
        private System.Windows.Forms.Label Right;
    }
}

