namespace Interpreter
{
    partial class FormLexer
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
            label2 = new Label();
            tableLayoutPanel1 = new TableLayoutPanel();
            OutputTextBox = new TextBox();
            tableLayoutPanel2 = new TableLayoutPanel();
            OutputLabel = new Label();
            tableLayoutPanel3 = new TableLayoutPanel();
            btnAtras = new Button();
            label1 = new Label();
            btnCloseP = new Button();
            tableLayoutPanel4 = new TableLayoutPanel();
            TextInputBox = new TextBox();
            tableLayoutPanel5 = new TableLayoutPanel();
            labelInputFile = new Label();
            buttonInputFile = new Button();
            label3 = new Label();
            tableLayoutPanel1.SuspendLayout();
            tableLayoutPanel3.SuspendLayout();
            tableLayoutPanel4.SuspendLayout();
            tableLayoutPanel5.SuspendLayout();
            SuspendLayout();
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            label2.AutoSize = true;
            label2.BackColor = Color.Transparent;
            label2.Font = new Font("Segoe UI Semibold", 9.75F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.White;
            label2.Location = new Point(3, 51);
            label2.Name = "label2";
            label2.Size = new Size(612, 17);
            label2.TabIndex = 6;
            label2.Text = "Ingrese el texto para analizar o cargue el archivo aqui:";
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.AutoSize = true;
            tableLayoutPanel1.AutoSizeMode = AutoSizeMode.GrowAndShrink;
            tableLayoutPanel1.BackColor = Color.FromArgb(61, 61, 61);
            tableLayoutPanel1.ColumnCount = 1;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.Controls.Add(label2, 0, 1);
            tableLayoutPanel1.Controls.Add(OutputTextBox, 0, 4);
            tableLayoutPanel1.Controls.Add(tableLayoutPanel2, 0, 5);
            tableLayoutPanel1.Controls.Add(OutputLabel, 0, 3);
            tableLayoutPanel1.Controls.Add(tableLayoutPanel3, 0, 0);
            tableLayoutPanel1.Controls.Add(tableLayoutPanel4, 0, 2);
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
            OutputTextBox.BackColor = Color.FromArgb(77, 77, 77);
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
            tableLayoutPanel2.BackColor = Color.FromArgb(61, 61, 61);
            tableLayoutPanel2.ColumnCount = 1;
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Dock = DockStyle.Fill;
            tableLayoutPanel2.Location = new Point(3, 529);
            tableLayoutPanel2.Name = "tableLayoutPanel2";
            tableLayoutPanel2.RowCount = 1;
            tableLayoutPanel2.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Size = new Size(612, 34);
            tableLayoutPanel2.TabIndex = 9;
            // 
            // OutputLabel
            // 
            OutputLabel.Anchor = AnchorStyles.Left;
            OutputLabel.AutoSize = true;
            OutputLabel.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            OutputLabel.ForeColor = Color.White;
            OutputLabel.Location = new Point(3, 294);
            OutputLabel.Name = "OutputLabel";
            OutputLabel.Size = new Size(49, 17);
            OutputLabel.TabIndex = 10;
            OutputLabel.Text = "Salida:";
            // 
            // tableLayoutPanel3
            // 
            tableLayoutPanel3.ColumnCount = 3;
            tableLayoutPanel3.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel3.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 507F));
            tableLayoutPanel3.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 51F));
            tableLayoutPanel3.Controls.Add(btnAtras, 0, 0);
            tableLayoutPanel3.Controls.Add(label1, 1, 0);
            tableLayoutPanel3.Controls.Add(btnCloseP, 2, 0);
            tableLayoutPanel3.Dock = DockStyle.Fill;
            tableLayoutPanel3.Location = new Point(3, 3);
            tableLayoutPanel3.Name = "tableLayoutPanel3";
            tableLayoutPanel3.RowCount = 1;
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel3.Size = new Size(612, 34);
            tableLayoutPanel3.TabIndex = 0;
            // 
            // btnAtras
            // 
            btnAtras.Dock = DockStyle.Fill;
            btnAtras.Font = new Font("Segoe UI Black", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnAtras.Location = new Point(10, 5);
            btnAtras.Margin = new Padding(10, 5, 10, 5);
            btnAtras.Name = "btnAtras";
            btnAtras.Size = new Size(34, 24);
            btnAtras.TabIndex = 5;
            btnAtras.Text = "<";
            btnAtras.UseVisualStyleBackColor = true;
            btnAtras.Click += btnAtras_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Dock = DockStyle.Fill;
            label1.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.White;
            label1.Location = new Point(57, 0);
            label1.Name = "label1";
            label1.Size = new Size(501, 34);
            label1.TabIndex = 0;
            label1.Text = "JSON LEXER";
            label1.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // btnCloseP
            // 
            btnCloseP.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            btnCloseP.BackColor = Color.Transparent;
            btnCloseP.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnCloseP.ForeColor = Color.Black;
            btnCloseP.Location = new Point(571, 5);
            btnCloseP.Margin = new Padding(10, 5, 10, 5);
            btnCloseP.Name = "btnCloseP";
            btnCloseP.Size = new Size(31, 24);
            btnCloseP.TabIndex = 6;
            btnCloseP.Text = "X";
            btnCloseP.UseVisualStyleBackColor = false;
            btnCloseP.Click += btnCloseP_Click;
            // 
            // tableLayoutPanel4
            // 
            tableLayoutPanel4.ColumnCount = 2;
            tableLayoutPanel4.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 81.04575F));
            tableLayoutPanel4.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 18.9542484F));
            tableLayoutPanel4.Controls.Add(TextInputBox, 0, 0);
            tableLayoutPanel4.Controls.Add(tableLayoutPanel5, 1, 0);
            tableLayoutPanel4.Dock = DockStyle.Fill;
            tableLayoutPanel4.Location = new Point(3, 83);
            tableLayoutPanel4.Name = "tableLayoutPanel4";
            tableLayoutPanel4.RowCount = 1;
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel4.Size = new Size(612, 197);
            tableLayoutPanel4.TabIndex = 11;
            // 
            // TextInputBox
            // 
            TextInputBox.BackColor = Color.FromArgb(77, 77, 77);
            TextInputBox.Dock = DockStyle.Fill;
            TextInputBox.ForeColor = Color.White;
            TextInputBox.Location = new Point(10, 10);
            TextInputBox.Margin = new Padding(10);
            TextInputBox.Multiline = true;
            TextInputBox.Name = "TextInputBox";
            TextInputBox.ScrollBars = ScrollBars.Vertical;
            TextInputBox.Size = new Size(476, 177);
            TextInputBox.TabIndex = 8;
            TextInputBox.TextChanged += TextInputBox_textChanged;
            // 
            // tableLayoutPanel5
            // 
            tableLayoutPanel5.ColumnCount = 1;
            tableLayoutPanel5.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel5.Controls.Add(labelInputFile, 0, 2);
            tableLayoutPanel5.Controls.Add(buttonInputFile, 0, 1);
            tableLayoutPanel5.Controls.Add(label3, 0, 0);
            tableLayoutPanel5.Dock = DockStyle.Fill;
            tableLayoutPanel5.Location = new Point(499, 3);
            tableLayoutPanel5.Name = "tableLayoutPanel5";
            tableLayoutPanel5.RowCount = 3;
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Percent, 19.371727F));
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Percent, 80.62827F));
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Absolute, 45F));
            tableLayoutPanel5.Size = new Size(110, 191);
            tableLayoutPanel5.TabIndex = 9;
            // 
            // labelInputFile
            // 
            labelInputFile.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            labelInputFile.AutoSize = true;
            labelInputFile.Font = new Font("Segoe UI", 9F, FontStyle.Italic, GraphicsUnit.Point, 0);
            labelInputFile.ForeColor = Color.White;
            labelInputFile.Location = new Point(3, 153);
            labelInputFile.Name = "labelInputFile";
            labelInputFile.Size = new Size(104, 30);
            labelInputFile.TabIndex = 8;
            labelInputFile.Text = "<Archivo no seleccionado>";
            labelInputFile.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // buttonInputFile
            // 
            buttonInputFile.Dock = DockStyle.Fill;
            buttonInputFile.Location = new Point(3, 68);
            buttonInputFile.Margin = new Padding(3, 40, 3, 40);
            buttonInputFile.Name = "buttonInputFile";
            buttonInputFile.Size = new Size(104, 37);
            buttonInputFile.TabIndex = 1;
            buttonInputFile.Text = "Analizar";
            buttonInputFile.UseVisualStyleBackColor = true;
            buttonInputFile.Click += buttonInputFile_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Dock = DockStyle.Fill;
            label3.Font = new Font("Segoe UI Semibold", 9F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.White;
            label3.Location = new Point(3, 0);
            label3.Name = "label3";
            label3.Size = new Size(104, 28);
            label3.TabIndex = 2;
            label3.Text = "Cargar desde:";
            label3.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // FormLexer
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            AutoScroll = true;
            ClientSize = new Size(618, 566);
            Controls.Add(tableLayoutPanel1);
            FormBorderStyle = FormBorderStyle.None;
            Name = "FormLexer";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Interprete JSON";
            FormClosing += Form1_FormClosing;
            tableLayoutPanel1.ResumeLayout(false);
            tableLayoutPanel1.PerformLayout();
            tableLayoutPanel3.ResumeLayout(false);
            tableLayoutPanel3.PerformLayout();
            tableLayoutPanel4.ResumeLayout(false);
            tableLayoutPanel4.PerformLayout();
            tableLayoutPanel5.ResumeLayout(false);
            tableLayoutPanel5.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion
        private Label label2;
        private TableLayoutPanel tableLayoutPanel1;
        private Label OutputLabel;
        private TextBox OutputTextBox;
        private TableLayoutPanel tableLayoutPanel2;
        private TableLayoutPanel tableLayoutPanel3;
        private Label label1;
        private Button btnAtras;
        private Button btnCloseP;
        private TableLayoutPanel tableLayoutPanel4;
        private TextBox TextInputBox;
        private TableLayoutPanel tableLayoutPanel5;
        private Button buttonInputFile;
        private Label label3;
        private Label labelInputFile;
    }
}