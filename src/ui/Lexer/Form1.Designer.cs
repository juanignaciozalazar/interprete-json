namespace Lexer
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            button2 = new Button();
            ConfigButton = new Button();
            button1 = new Button();
            SuspendLayout();
            // 
            // button2
            // 
            button2.BackColor = Color.Transparent;
            button2.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            button2.ForeColor = Color.Black;
            button2.Location = new Point(470, 4);
            button2.Name = "button2";
            button2.Size = new Size(25, 25);
            button2.TabIndex = 1;
            button2.Text = "X";
            button2.UseVisualStyleBackColor = false;
            button2.Click += button2_Click;
            // 
            // ConfigButton
            // 
            ConfigButton.Location = new Point(12, 12);
            ConfigButton.Name = "ConfigButton";
            ConfigButton.Size = new Size(75, 23);
            ConfigButton.TabIndex = 2;
            ConfigButton.Text = "Configurar";
            ConfigButton.UseVisualStyleBackColor = true;
            ConfigButton.Click += ConfigButton_Click;
            // 
            // button1
            // 
            button1.BackColor = Color.White;
            button1.FlatAppearance.BorderSize = 0;
            button1.ForeColor = Color.Black;
            button1.Location = new Point(181, 261);
            button1.Name = "button1";
            button1.Size = new Size(136, 27);
            button1.TabIndex = 0;
            button1.Text = "Interprete Léxico";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackgroundImage = Properties.Resources.Group_5;
            ClientSize = new Size(500, 300);
            Controls.Add(ConfigButton);
            Controls.Add(button2);
            Controls.Add(button1);
            FormBorderStyle = FormBorderStyle.None;
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion
        private Button button2;
        private Button ConfigButton;
        private Button button1;
    }
}
