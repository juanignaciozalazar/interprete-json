namespace Interpreter
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
            buttonExit = new Button();
            ConfigButton = new Button();
            buttonLexer = new Button();
            buttonParser = new Button();
            SuspendLayout();
            // 
            // buttonExit
            // 
            buttonExit.BackColor = Color.Transparent;
            buttonExit.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            buttonExit.ForeColor = Color.Black;
            buttonExit.Location = new Point(470, 4);
            buttonExit.Name = "buttonExit";
            buttonExit.Size = new Size(25, 25);
            buttonExit.TabIndex = 1;
            buttonExit.Text = "X";
            buttonExit.UseVisualStyleBackColor = false;
            buttonExit.Click += buttonExit_Click;
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
            // buttonLexer
            // 
            buttonLexer.BackColor = Color.White;
            buttonLexer.FlatAppearance.BorderSize = 0;
            buttonLexer.ForeColor = Color.Black;
            buttonLexer.Location = new Point(101, 261);
            buttonLexer.Name = "buttonLexer";
            buttonLexer.Size = new Size(136, 27);
            buttonLexer.TabIndex = 0;
            buttonLexer.Text = "Interprete Léxico";
            buttonLexer.UseVisualStyleBackColor = true;
            buttonLexer.Click += buttonLexer_Click;
            // 
            // buttonParser
            // 
            buttonParser.Location = new Point(273, 261);
            buttonParser.Name = "buttonParser";
            buttonParser.Size = new Size(142, 25);
            buttonParser.TabIndex = 3;
            buttonParser.Text = "Interprete Sintáctico";
            buttonParser.UseVisualStyleBackColor = true;
            buttonParser.Click += buttonParser_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackgroundImage = InterpreterUI.Properties.Resources.Group_5;
            ClientSize = new Size(500, 300);
            Controls.Add(buttonParser);
            Controls.Add(ConfigButton);
            Controls.Add(buttonExit);
            Controls.Add(buttonLexer);
            FormBorderStyle = FormBorderStyle.None;
            Name = "Form1";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion
        private Button buttonExit;
        private Button ConfigButton;
        private Button buttonLexer;
        private Button buttonParser;
    }
}
