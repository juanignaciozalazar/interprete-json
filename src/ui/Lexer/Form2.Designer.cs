namespace Lexer
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            TextInputBox = new TextBox();
            label2 = new Label();
            tableLayoutPanel1 = new TableLayoutPanel();
            OutputTextBox = new TextBox();
            tableLayoutPanel2 = new TableLayoutPanel();
            ExitButton = new Button();
            OutputLabel = new Label();
            Titulo = new Label();
            tableLayoutPanel1.SuspendLayout();
            tableLayoutPanel2.SuspendLayout();
            SuspendLayout();
            // 
            // TextInputBox
            // 
            TextInputBox.BackColor = Color.FromArgb(49, 54, 63);
            TextInputBox.Dock = DockStyle.Fill;
            TextInputBox.ForeColor = Color.White;
            TextInputBox.Location = new Point(10, 90);
            TextInputBox.Margin = new Padding(10);
            TextInputBox.Multiline = true;
            TextInputBox.Name = "TextInputBox";
            TextInputBox.ScrollBars = ScrollBars.Vertical;
            TextInputBox.Size = new Size(598, 183);
            TextInputBox.TabIndex = 7;
            TextInputBox.TextChanged += TextInputBox_textChanged;
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            label2.AutoSize = true;
            label2.BackColor = Color.Transparent;
            label2.Font = new Font("Microsoft Sans Serif", 10F);
            label2.ForeColor = Color.White;
            label2.Location = new Point(3, 51);
            label2.Name = "label2";
            label2.Size = new Size(612, 17);
            label2.TabIndex = 6;
            label2.Text = "Por favor, ingrese el texto para ser analizado a continuación: ";
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.AutoSize = true;
            tableLayoutPanel1.AutoSizeMode = AutoSizeMode.GrowAndShrink;
            tableLayoutPanel1.BackColor = Color.FromArgb(49, 54, 63);
            tableLayoutPanel1.ColumnCount = 1;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.Controls.Add(label2, 0, 1);
            tableLayoutPanel1.Controls.Add(TextInputBox, 0, 2);
            tableLayoutPanel1.Controls.Add(OutputTextBox, 0, 4);
            tableLayoutPanel1.Controls.Add(tableLayoutPanel2, 0, 5);
            tableLayoutPanel1.Controls.Add(OutputLabel, 0, 3);
            tableLayoutPanel1.Controls.Add(Titulo, 0, 0);
            tableLayoutPanel1.Dock = DockStyle.Fill;
            tableLayoutPanel1.Location = new Point(0, 0);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 6;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.Size = new Size(618, 566);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // OutputTextBox
            // 
            OutputTextBox.BackColor = Color.FromArgb(49, 54, 63);
            OutputTextBox.CausesValidation = false;
            OutputTextBox.Dock = DockStyle.Fill;
            OutputTextBox.ForeColor = Color.White;
            OutputTextBox.Location = new Point(10, 333);
            OutputTextBox.Margin = new Padding(10);
            OutputTextBox.Multiline = true;
            OutputTextBox.Name = "OutputTextBox";
            OutputTextBox.ReadOnly = true;
            OutputTextBox.ScrollBars = ScrollBars.Vertical;
            OutputTextBox.Size = new Size(598, 183);
            OutputTextBox.TabIndex = 8;
            // 
            // tableLayoutPanel2
            // 
            tableLayoutPanel2.BackColor = Color.FromArgb(49, 54, 63);
            tableLayoutPanel2.ColumnCount = 1;
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Controls.Add(ExitButton, 0, 0);
            tableLayoutPanel2.Dock = DockStyle.Fill;
            tableLayoutPanel2.Location = new Point(3, 529);
            tableLayoutPanel2.Name = "tableLayoutPanel2";
            tableLayoutPanel2.RowCount = 1;
            tableLayoutPanel2.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Size = new Size(612, 34);
            tableLayoutPanel2.TabIndex = 9;
            // 
            // ExitButton
            // 
            ExitButton.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            ExitButton.Location = new Point(256, 3);
            ExitButton.MaximumSize = new Size(100, 100);
            ExitButton.Name = "ExitButton";
            ExitButton.Size = new Size(100, 28);
            ExitButton.TabIndex = 0;
            ExitButton.Text = "Salir";
            ExitButton.UseVisualStyleBackColor = true;
            ExitButton.Click += ExitButton_Click;
            // 
            // OutputLabel
            // 
            OutputLabel.Anchor = AnchorStyles.Left;
            OutputLabel.AutoSize = true;
            OutputLabel.Font = new Font("Microsoft Sans Serif", 10F);
            OutputLabel.ForeColor = Color.White;
            OutputLabel.Location = new Point(3, 294);
            OutputLabel.Name = "OutputLabel";
            OutputLabel.Size = new Size(51, 17);
            OutputLabel.TabIndex = 10;
            OutputLabel.Text = "Salida:";
            // 
            // Titulo
            // 
            Titulo.Dock = DockStyle.Fill;
            Titulo.Font = new Font("Segoe UI", 18F, FontStyle.Bold, GraphicsUnit.Point, 0);
            Titulo.ForeColor = Color.White;
            Titulo.Location = new Point(3, 0);
            Titulo.Name = "Titulo";
            Titulo.Size = new Size(612, 40);
            Titulo.TabIndex = 11;
            Titulo.Text = "JSON Lexer";
            Titulo.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            AutoScroll = true;
            ClientSize = new Size(618, 566);
            Controls.Add(tableLayoutPanel1);
            Name = "Form2";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Interprete JSON";
            FormClosing += Form1_FormClosing;
            tableLayoutPanel1.ResumeLayout(false);
            tableLayoutPanel1.PerformLayout();
            tableLayoutPanel2.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox TextInputBox;
        private Label label2;
        private TableLayoutPanel tableLayoutPanel1;
        private Label OutputLabel;
        private TextBox OutputTextBox;
        private TableLayoutPanel tableLayoutPanel2;
        private Button ExitButton;
        private Label Titulo;
    }
}