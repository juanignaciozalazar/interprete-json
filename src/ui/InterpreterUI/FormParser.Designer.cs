using System.Windows.Forms;

namespace InterpreterUI
{
    partial class FormParser
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
            tableLayoutPanel1 = new TableLayoutPanel();
            tableLayoutPanel2 = new TableLayoutPanel();
            tableLayoutPanel7 = new TableLayoutPanel();
            label8 = new Label();
            tableLayoutPanel8 = new TableLayoutPanel();
            labelInputFile = new Label();
            buttonInputFile = new Button();
            label10 = new Label();
            tableLayoutPanel9 = new TableLayoutPanel();
            label12 = new Label();
            tableLayoutPanel6 = new TableLayoutPanel();
            buttonOutputFile = new Button();
            txtOutputFile = new TextBox();
            buttonParse = new Button();
            lblEstado = new Label();
            tableLayoutPanel4 = new TableLayoutPanel();
            tableLayoutPanel3 = new TableLayoutPanel();
            textBoxInput = new TextBox();
            textBoxOutput = new TextBox();
            label7 = new Label();
            label1 = new Label();
            label6 = new Label();
            tableLayoutPanel5 = new TableLayoutPanel();
            label2 = new Label();
            btnCloseP = new Button();
            btnAtras = new Button();
            openFileDialogJson = new OpenFileDialog();
            tableLayoutPanel1.SuspendLayout();
            tableLayoutPanel2.SuspendLayout();
            tableLayoutPanel7.SuspendLayout();
            tableLayoutPanel8.SuspendLayout();
            tableLayoutPanel9.SuspendLayout();
            tableLayoutPanel6.SuspendLayout();
            tableLayoutPanel3.SuspendLayout();
            tableLayoutPanel5.SuspendLayout();
            SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.BackColor = Color.FromArgb(65, 63, 66);
            tableLayoutPanel1.ColumnCount = 1;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.Controls.Add(tableLayoutPanel2, 0, 1);
            tableLayoutPanel1.Controls.Add(tableLayoutPanel5, 0, 0);
            tableLayoutPanel1.Dock = DockStyle.Fill;
            tableLayoutPanel1.Location = new Point(0, 0);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 3;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 57F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.Size = new Size(818, 538);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // tableLayoutPanel2
            // 
            tableLayoutPanel2.ColumnCount = 3;
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 93.87387F));
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 6.12612629F));
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 238F));
            tableLayoutPanel2.Controls.Add(tableLayoutPanel7, 0, 0);
            tableLayoutPanel2.Controls.Add(tableLayoutPanel4, 0, 0);
            tableLayoutPanel2.Controls.Add(tableLayoutPanel3, 0, 0);
            tableLayoutPanel2.Dock = DockStyle.Fill;
            tableLayoutPanel2.Location = new Point(3, 60);
            tableLayoutPanel2.Name = "tableLayoutPanel2";
            tableLayoutPanel2.RowCount = 1;
            tableLayoutPanel2.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Size = new Size(812, 455);
            tableLayoutPanel2.TabIndex = 0;
            // 
            // tableLayoutPanel7
            // 
            tableLayoutPanel7.BackColor = Color.FromArgb(80, 83, 84);
            tableLayoutPanel7.ColumnCount = 1;
            tableLayoutPanel7.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel7.Controls.Add(label8, 0, 0);
            tableLayoutPanel7.Controls.Add(tableLayoutPanel8, 0, 1);
            tableLayoutPanel7.Controls.Add(tableLayoutPanel9, 0, 2);
            tableLayoutPanel7.Controls.Add(buttonParse, 0, 4);
            tableLayoutPanel7.Controls.Add(lblEstado, 0, 3);
            tableLayoutPanel7.Dock = DockStyle.Fill;
            tableLayoutPanel7.Location = new Point(576, 3);
            tableLayoutPanel7.Name = "tableLayoutPanel7";
            tableLayoutPanel7.RowCount = 5;
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Absolute, 45F));
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Percent, 47.3076935F));
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Percent, 29.62963F));
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Percent, 23.0769234F));
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Absolute, 51F));
            tableLayoutPanel7.Size = new Size(233, 449);
            tableLayoutPanel7.TabIndex = 3;
            // 
            // label8
            // 
            label8.Dock = DockStyle.Top;
            label8.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold | FontStyle.Underline, GraphicsUnit.Point, 0);
            label8.ForeColor = Color.White;
            label8.Location = new Point(3, 0);
            label8.Name = "label8";
            label8.Size = new Size(227, 40);
            label8.TabIndex = 0;
            label8.Text = "Interprete Automatico";
            label8.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // tableLayoutPanel8
            // 
            tableLayoutPanel8.ColumnCount = 1;
            tableLayoutPanel8.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel8.Controls.Add(labelInputFile, 0, 2);
            tableLayoutPanel8.Controls.Add(buttonInputFile, 0, 1);
            tableLayoutPanel8.Controls.Add(label10, 0, 0);
            tableLayoutPanel8.Dock = DockStyle.Fill;
            tableLayoutPanel8.Location = new Point(3, 48);
            tableLayoutPanel8.Name = "tableLayoutPanel8";
            tableLayoutPanel8.RowCount = 3;
            tableLayoutPanel8.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel8.RowStyles.Add(new RowStyle(SizeType.Absolute, 83F));
            tableLayoutPanel8.RowStyles.Add(new RowStyle(SizeType.Absolute, 14F));
            tableLayoutPanel8.Size = new Size(227, 160);
            tableLayoutPanel8.TabIndex = 2;
            // 
            // labelInputFile
            // 
            labelInputFile.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            labelInputFile.AutoSize = true;
            labelInputFile.Font = new Font("Segoe UI", 9F, FontStyle.Italic, GraphicsUnit.Point, 0);
            labelInputFile.ForeColor = Color.White;
            labelInputFile.Location = new Point(3, 134);
            labelInputFile.Name = "labelInputFile";
            labelInputFile.Size = new Size(221, 15);
            labelInputFile.TabIndex = 7;
            labelInputFile.Text = "<Archivo no seleccionado>";
            labelInputFile.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // buttonInputFile
            // 
            buttonInputFile.Dock = DockStyle.Fill;
            buttonInputFile.Font = new Font("Segoe UI Semibold", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            buttonInputFile.Location = new Point(60, 60);
            buttonInputFile.Margin = new Padding(60, 20, 60, 20);
            buttonInputFile.Name = "buttonInputFile";
            buttonInputFile.Padding = new Padding(3);
            buttonInputFile.Size = new Size(107, 43);
            buttonInputFile.TabIndex = 5;
            buttonInputFile.Text = "JSON";
            buttonInputFile.UseVisualStyleBackColor = true;
            buttonInputFile.Click += buttonInputFile_Click;
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Dock = DockStyle.Fill;
            label10.Font = new Font("Segoe UI", 9F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label10.ForeColor = Color.White;
            label10.Location = new Point(3, 0);
            label10.Name = "label10";
            label10.Size = new Size(221, 40);
            label10.TabIndex = 6;
            label10.Text = "Paso 1: Seleccione el archivo de \u2028entrada";
            // 
            // tableLayoutPanel9
            // 
            tableLayoutPanel9.ColumnCount = 1;
            tableLayoutPanel9.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel9.Controls.Add(label12, 0, 0);
            tableLayoutPanel9.Controls.Add(tableLayoutPanel6, 0, 1);
            tableLayoutPanel9.Dock = DockStyle.Fill;
            tableLayoutPanel9.Location = new Point(3, 214);
            tableLayoutPanel9.Name = "tableLayoutPanel9";
            tableLayoutPanel9.RowCount = 2;
            tableLayoutPanel9.RowStyles.Add(new RowStyle(SizeType.Absolute, 30F));
            tableLayoutPanel9.RowStyles.Add(new RowStyle(SizeType.Absolute, 83F));
            tableLayoutPanel9.Size = new Size(227, 98);
            tableLayoutPanel9.TabIndex = 3;
            // 
            // label12
            // 
            label12.AutoSize = true;
            label12.Dock = DockStyle.Fill;
            label12.Font = new Font("Segoe UI", 9F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label12.ForeColor = Color.White;
            label12.Location = new Point(3, 0);
            label12.Name = "label12";
            label12.Size = new Size(221, 30);
            label12.TabIndex = 7;
            label12.Text = "Paso 2: Seleccione la ruta de salida";
            // 
            // tableLayoutPanel6
            // 
            tableLayoutPanel6.ColumnCount = 2;
            tableLayoutPanel6.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 83.25792F));
            tableLayoutPanel6.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 16.74208F));
            tableLayoutPanel6.Controls.Add(buttonOutputFile, 1, 0);
            tableLayoutPanel6.Controls.Add(txtOutputFile, 0, 0);
            tableLayoutPanel6.Dock = DockStyle.Fill;
            tableLayoutPanel6.Location = new Point(3, 33);
            tableLayoutPanel6.Name = "tableLayoutPanel6";
            tableLayoutPanel6.RowCount = 1;
            tableLayoutPanel6.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel6.Size = new Size(221, 77);
            tableLayoutPanel6.TabIndex = 9;
            // 
            // buttonOutputFile
            // 
            buttonOutputFile.Dock = DockStyle.Fill;
            buttonOutputFile.Enabled = false;
            buttonOutputFile.Font = new Font("Segoe UI Semibold", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            buttonOutputFile.Location = new Point(187, 8);
            buttonOutputFile.Margin = new Padding(3, 8, 3, 42);
            buttonOutputFile.Name = "buttonOutputFile";
            buttonOutputFile.Size = new Size(31, 27);
            buttonOutputFile.TabIndex = 10;
            buttonOutputFile.Text = "...";
            buttonOutputFile.UseVisualStyleBackColor = true;
            buttonOutputFile.Click += buttonOutputFile_Click;
            // 
            // txtOutputFile
            // 
            txtOutputFile.Dock = DockStyle.Fill;
            txtOutputFile.Enabled = false;
            txtOutputFile.ForeColor = Color.Gray;
            txtOutputFile.Location = new Point(5, 10);
            txtOutputFile.Margin = new Padding(5, 10, 5, 5);
            txtOutputFile.Name = "txtOutputFile";
            txtOutputFile.Size = new Size(174, 23);
            txtOutputFile.TabIndex = 0;
            txtOutputFile.Text = "Escribir directorio";
            txtOutputFile.Enter += txtOutputFile_Enter;
            txtOutputFile.Leave += txtOutputFile_Leave;
            // 
            // buttonParse
            // 
            buttonParse.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonParse.Enabled = false;
            buttonParse.Font = new Font("Segoe UI Semibold", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            buttonParse.Location = new Point(72, 406);
            buttonParse.Margin = new Padding(3, 10, 3, 10);
            buttonParse.MaximumSize = new Size(100, 0);
            buttonParse.Name = "buttonParse";
            buttonParse.Size = new Size(89, 33);
            buttonParse.TabIndex = 1;
            buttonParse.Text = "CREAR HTML";
            buttonParse.UseVisualStyleBackColor = true;
            buttonParse.Click += buttonParse_Click;
            // 
            // lblEstado
            // 
            lblEstado.AutoSize = true;
            lblEstado.Dock = DockStyle.Fill;
            lblEstado.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            lblEstado.ForeColor = Color.White;
            lblEstado.Location = new Point(3, 345);
            lblEstado.Margin = new Padding(3, 30, 3, 30);
            lblEstado.Name = "lblEstado";
            lblEstado.Size = new Size(227, 21);
            lblEstado.TabIndex = 4;
            lblEstado.Text = "<Estado: none>";
            lblEstado.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // tableLayoutPanel4
            // 
            tableLayoutPanel4.BackColor = Color.FromArgb(65, 63, 66);
            tableLayoutPanel4.ColumnCount = 1;
            tableLayoutPanel4.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel4.Dock = DockStyle.Fill;
            tableLayoutPanel4.Location = new Point(541, 3);
            tableLayoutPanel4.Name = "tableLayoutPanel4";
            tableLayoutPanel4.RowCount = 1;
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Absolute, 45F));
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel4.Size = new Size(29, 449);
            tableLayoutPanel4.TabIndex = 2;
            // 
            // tableLayoutPanel3
            // 
            tableLayoutPanel3.BackColor = Color.FromArgb(80, 82, 84);
            tableLayoutPanel3.ColumnCount = 1;
            tableLayoutPanel3.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel3.Controls.Add(textBoxInput, 0, 2);
            tableLayoutPanel3.Controls.Add(textBoxOutput, 0, 4);
            tableLayoutPanel3.Controls.Add(label7, 0, 3);
            tableLayoutPanel3.Controls.Add(label1, 0, 0);
            tableLayoutPanel3.Controls.Add(label6, 0, 1);
            tableLayoutPanel3.Dock = DockStyle.Fill;
            tableLayoutPanel3.Location = new Point(3, 3);
            tableLayoutPanel3.Name = "tableLayoutPanel3";
            tableLayoutPanel3.RowCount = 6;
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 52F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 56F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 133F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 137F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 8F));
            tableLayoutPanel3.Size = new Size(532, 449);
            tableLayoutPanel3.TabIndex = 0;
            // 
            // textBoxInput
            // 
            textBoxInput.Dock = DockStyle.Fill;
            textBoxInput.Location = new Point(15, 111);
            textBoxInput.Margin = new Padding(15, 3, 15, 3);
            textBoxInput.Multiline = true;
            textBoxInput.Name = "textBoxInput";
            textBoxInput.ScrollBars = ScrollBars.Vertical;
            textBoxInput.Size = new Size(502, 127);
            textBoxInput.TabIndex = 0;
            textBoxInput.TextChanged += textBoxInput_textChanged;
            // 
            // textBoxOutput
            // 
            textBoxOutput.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            textBoxOutput.Location = new Point(15, 284);
            textBoxOutput.Margin = new Padding(15, 3, 15, 3);
            textBoxOutput.Multiline = true;
            textBoxOutput.Name = "textBoxOutput";
            textBoxOutput.ReadOnly = true;
            textBoxOutput.ScrollBars = ScrollBars.Vertical;
            textBoxOutput.Size = new Size(502, 131);
            textBoxOutput.TabIndex = 1;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Dock = DockStyle.Fill;
            label7.Font = new Font("Segoe UI", 9F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label7.ForeColor = Color.White;
            label7.Location = new Point(15, 241);
            label7.Margin = new Padding(15, 0, 3, 0);
            label7.Name = "label7";
            label7.Size = new Size(514, 40);
            label7.TabIndex = 4;
            label7.Text = "Su salida es la siguiente:";
            label7.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Dock = DockStyle.Fill;
            label1.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold | FontStyle.Underline, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.White;
            label1.Location = new Point(3, 0);
            label1.Name = "label1";
            label1.Size = new Size(526, 52);
            label1.TabIndex = 2;
            label1.Text = "Interprete Manual";
            label1.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Dock = DockStyle.Fill;
            label6.Font = new Font("Segoe UI", 9F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point, 0);
            label6.ForeColor = Color.White;
            label6.Location = new Point(15, 52);
            label6.Margin = new Padding(15, 0, 3, 0);
            label6.Name = "label6";
            label6.Size = new Size(514, 56);
            label6.TabIndex = 3;
            label6.Text = "Escriba o pegue una entrada:";
            label6.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // tableLayoutPanel5
            // 
            tableLayoutPanel5.ColumnCount = 3;
            tableLayoutPanel5.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 6.91994572F));
            tableLayoutPanel5.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 93.0800552F));
            tableLayoutPanel5.ColumnStyles.Add(new ColumnStyle(SizeType.Absolute, 56F));
            tableLayoutPanel5.Controls.Add(label2, 1, 0);
            tableLayoutPanel5.Controls.Add(btnCloseP, 2, 0);
            tableLayoutPanel5.Controls.Add(btnAtras, 0, 0);
            tableLayoutPanel5.Dock = DockStyle.Fill;
            tableLayoutPanel5.Location = new Point(3, 3);
            tableLayoutPanel5.Name = "tableLayoutPanel5";
            tableLayoutPanel5.RowCount = 1;
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel5.Size = new Size(812, 51);
            tableLayoutPanel5.TabIndex = 1;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Dock = DockStyle.Fill;
            label2.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold | FontStyle.Underline, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.White;
            label2.Location = new Point(55, 0);
            label2.Name = "label2";
            label2.Size = new Size(697, 51);
            label2.TabIndex = 0;
            label2.Text = "INTERPRETE SINTÁCTICO";
            label2.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // btnCloseP
            // 
            btnCloseP.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            btnCloseP.BackColor = Color.Transparent;
            btnCloseP.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnCloseP.ForeColor = Color.Black;
            btnCloseP.Location = new Point(767, 12);
            btnCloseP.Margin = new Padding(12);
            btnCloseP.Name = "btnCloseP";
            btnCloseP.Size = new Size(33, 27);
            btnCloseP.TabIndex = 3;
            btnCloseP.Text = "X";
            btnCloseP.UseVisualStyleBackColor = false;
            btnCloseP.Click += btnCloseP_Click;
            // 
            // btnAtras
            // 
            btnAtras.Dock = DockStyle.Fill;
            btnAtras.Font = new Font("Segoe UI Black", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnAtras.Location = new Point(12, 12);
            btnAtras.Margin = new Padding(12);
            btnAtras.Name = "btnAtras";
            btnAtras.Size = new Size(28, 27);
            btnAtras.TabIndex = 4;
            btnAtras.Text = "<";
            btnAtras.UseVisualStyleBackColor = true;
            btnAtras.Click += btnAtras_Click;
            // 
            // openFileDialogJson
            // 
            openFileDialogJson.Filter = "JSON files (*.json)|*.json|All files (*.*)|*.*";
            openFileDialogJson.Title = "Select a JSON file";
            // 
            // FormParser
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(818, 538);
            Controls.Add(tableLayoutPanel1);
            FormBorderStyle = FormBorderStyle.None;
            Name = "FormParser";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Parser";
            tableLayoutPanel1.ResumeLayout(false);
            tableLayoutPanel2.ResumeLayout(false);
            tableLayoutPanel7.ResumeLayout(false);
            tableLayoutPanel7.PerformLayout();
            tableLayoutPanel8.ResumeLayout(false);
            tableLayoutPanel8.PerformLayout();
            tableLayoutPanel9.ResumeLayout(false);
            tableLayoutPanel9.PerformLayout();
            tableLayoutPanel6.ResumeLayout(false);
            tableLayoutPanel6.PerformLayout();
            tableLayoutPanel3.ResumeLayout(false);
            tableLayoutPanel3.PerformLayout();
            tableLayoutPanel5.ResumeLayout(false);
            tableLayoutPanel5.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private TableLayoutPanel tableLayoutPanel1;
        private TableLayoutPanel tableLayoutPanel2;
        private TableLayoutPanel tableLayoutPanel3;
        private TextBox textBoxInput;
        private TextBox textBoxOutput;
        private Label label6;
        private Label label7;
        private Label label1;
        private TableLayoutPanel tableLayoutPanel7;
        private Label label8;
        private TableLayoutPanel tableLayoutPanel8;
        private Label labelInputFile;
        private Button buttonInputFile;
        private Label label10;
        private TableLayoutPanel tableLayoutPanel9;
        private Label label12;
        private Button buttonParse;
        private TableLayoutPanel tableLayoutPanel4;
        private TableLayoutPanel tableLayoutPanel5;
        private Label label2;
        private Button btnCloseP;
        private Button btnAtras;
        private TableLayoutPanel tableLayoutPanel6;
        private Button buttonOutputFile;
        private TextBox txtOutputFile;
        private Label lblEstado;
    }
}