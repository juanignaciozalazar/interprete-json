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
            tableLayoutPanel3 = new TableLayoutPanel();
            textBoxInput = new TextBox();
            textBoxOutput = new TextBox();
            responseHelp = new Label();
            label1 = new Label();
            tableLayoutPanel4 = new TableLayoutPanel();
            label3 = new Label();
            buttonParse = new Button();
            tableLayoutPanel5 = new TableLayoutPanel();
            labelInputFile = new Label();
            buttonInputFile = new Button();
            tableLayoutPanel6 = new TableLayoutPanel();
            buttonOutputFile = new Button();
            labelOutputFile = new Label();
            tableLayoutPanel7 = new TableLayoutPanel();
            buttonTemplateFile = new Button();
            labelTemplateFile = new Label();
            label2 = new Label();
            tableLayoutPanel1.SuspendLayout();
            tableLayoutPanel2.SuspendLayout();
            tableLayoutPanel3.SuspendLayout();
            tableLayoutPanel4.SuspendLayout();
            tableLayoutPanel5.SuspendLayout();
            tableLayoutPanel6.SuspendLayout();
            tableLayoutPanel7.SuspendLayout();
            SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.ColumnCount = 1;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.Controls.Add(tableLayoutPanel2, 0, 1);
            tableLayoutPanel1.Controls.Add(label2, 0, 0);
            tableLayoutPanel1.Dock = DockStyle.Fill;
            tableLayoutPanel1.Location = new Point(0, 0);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 3;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Absolute, 20F));
            tableLayoutPanel1.Size = new Size(800, 450);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // tableLayoutPanel2
            // 
            tableLayoutPanel2.ColumnCount = 2;
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 70F));
            tableLayoutPanel2.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 30F));
            tableLayoutPanel2.Controls.Add(tableLayoutPanel3, 0, 0);
            tableLayoutPanel2.Controls.Add(tableLayoutPanel4, 1, 0);
            tableLayoutPanel2.Dock = DockStyle.Fill;
            tableLayoutPanel2.Location = new Point(3, 43);
            tableLayoutPanel2.Name = "tableLayoutPanel2";
            tableLayoutPanel2.RowCount = 1;
            tableLayoutPanel2.RowStyles.Add(new RowStyle(SizeType.Percent, 100F));
            tableLayoutPanel2.Size = new Size(794, 364);
            tableLayoutPanel2.TabIndex = 0;
            // 
            // tableLayoutPanel3
            // 
            tableLayoutPanel3.ColumnCount = 1;
            tableLayoutPanel3.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel3.Controls.Add(textBoxInput, 0, 1);
            tableLayoutPanel3.Controls.Add(textBoxOutput, 0, 3);
            tableLayoutPanel3.Controls.Add(responseHelp, 0, 2);
            tableLayoutPanel3.Controls.Add(label1, 0, 0);
            tableLayoutPanel3.Dock = DockStyle.Fill;
            tableLayoutPanel3.Location = new Point(3, 3);
            tableLayoutPanel3.Name = "tableLayoutPanel3";
            tableLayoutPanel3.RowCount = 4;
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel3.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel3.Size = new Size(549, 358);
            tableLayoutPanel3.TabIndex = 0;
            // 
            // textBoxInput
            // 
            textBoxInput.Dock = DockStyle.Fill;
            textBoxInput.Location = new Point(3, 43);
            textBoxInput.Multiline = true;
            textBoxInput.Name = "textBoxInput";
            textBoxInput.Size = new Size(543, 133);
            textBoxInput.TabIndex = 0;
            textBoxInput.TextChanged += textBoxInput_textChanged;
            // 
            // textBoxOutput
            // 
            textBoxOutput.Dock = DockStyle.Fill;
            textBoxOutput.Location = new Point(3, 222);
            textBoxOutput.Multiline = true;
            textBoxOutput.Name = "textBoxOutput";
            textBoxOutput.ReadOnly = true;
            textBoxOutput.Size = new Size(543, 133);
            textBoxOutput.TabIndex = 1;
            // 
            // responseHelp
            // 
            responseHelp.AutoSize = true;
            responseHelp.Dock = DockStyle.Fill;
            responseHelp.Location = new Point(3, 179);
            responseHelp.Name = "responseHelp";
            responseHelp.Size = new Size(543, 40);
            responseHelp.TabIndex = 2;
            responseHelp.Text = "Salida:";
            responseHelp.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Dock = DockStyle.Fill;
            label1.Location = new Point(3, 0);
            label1.Name = "label1";
            label1.Size = new Size(543, 40);
            label1.TabIndex = 3;
            label1.Text = "Entrada:";
            label1.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // tableLayoutPanel4
            // 
            tableLayoutPanel4.ColumnCount = 1;
            tableLayoutPanel4.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 100F));
            tableLayoutPanel4.Controls.Add(label3, 0, 0);
            tableLayoutPanel4.Controls.Add(buttonParse, 0, 4);
            tableLayoutPanel4.Controls.Add(tableLayoutPanel5, 0, 1);
            tableLayoutPanel4.Controls.Add(tableLayoutPanel6, 0, 2);
            tableLayoutPanel4.Controls.Add(tableLayoutPanel7, 0, 3);
            tableLayoutPanel4.Dock = DockStyle.Fill;
            tableLayoutPanel4.Location = new Point(558, 3);
            tableLayoutPanel4.Name = "tableLayoutPanel4";
            tableLayoutPanel4.RowCount = 5;
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel4.RowStyles.Add(new RowStyle(SizeType.Absolute, 40F));
            tableLayoutPanel4.Size = new Size(233, 358);
            tableLayoutPanel4.TabIndex = 1;
            // 
            // label3
            // 
            label3.Dock = DockStyle.Fill;
            label3.Location = new Point(3, 0);
            label3.Name = "label3";
            label3.Size = new Size(227, 40);
            label3.TabIndex = 0;
            label3.Text = "Archivos";
            label3.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // buttonParse
            // 
            buttonParse.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonParse.Location = new Point(91, 319);
            buttonParse.MaximumSize = new Size(100, 0);
            buttonParse.Name = "buttonParse";
            buttonParse.Size = new Size(50, 36);
            buttonParse.TabIndex = 1;
            buttonParse.Text = "Parse";
            buttonParse.UseVisualStyleBackColor = true;
            buttonParse.Click += buttonParse_Click;
            // 
            // tableLayoutPanel5
            // 
            tableLayoutPanel5.ColumnCount = 1;
            tableLayoutPanel5.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel5.Controls.Add(labelInputFile, 0, 0);
            tableLayoutPanel5.Controls.Add(buttonInputFile, 0, 1);
            tableLayoutPanel5.Dock = DockStyle.Fill;
            tableLayoutPanel5.Location = new Point(3, 43);
            tableLayoutPanel5.Name = "tableLayoutPanel5";
            tableLayoutPanel5.RowCount = 2;
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Percent, 34.88372F));
            tableLayoutPanel5.RowStyles.Add(new RowStyle(SizeType.Percent, 65.11628F));
            tableLayoutPanel5.Size = new Size(227, 86);
            tableLayoutPanel5.TabIndex = 2;
            // 
            // labelInputFile
            // 
            labelInputFile.AutoSize = true;
            labelInputFile.Dock = DockStyle.Fill;
            labelInputFile.Location = new Point(3, 0);
            labelInputFile.Name = "labelInputFile";
            labelInputFile.Size = new Size(221, 30);
            labelInputFile.TabIndex = 0;
            labelInputFile.Text = "<vacio>";
            labelInputFile.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // buttonInputFile
            // 
            buttonInputFile.Location = new Point(3, 33);
            buttonInputFile.Name = "buttonInputFile";
            buttonInputFile.Size = new Size(135, 23);
            buttonInputFile.TabIndex = 1;
            buttonInputFile.Text = "Archivo de Entrada";
            buttonInputFile.UseVisualStyleBackColor = true;
            buttonInputFile.Click += buttonInputFile_Click;
            // 
            // tableLayoutPanel6
            // 
            tableLayoutPanel6.ColumnCount = 1;
            tableLayoutPanel6.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel6.Controls.Add(buttonOutputFile, 0, 1);
            tableLayoutPanel6.Controls.Add(labelOutputFile, 0, 0);
            tableLayoutPanel6.Dock = DockStyle.Fill;
            tableLayoutPanel6.Location = new Point(3, 135);
            tableLayoutPanel6.Name = "tableLayoutPanel6";
            tableLayoutPanel6.RowCount = 2;
            tableLayoutPanel6.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel6.RowStyles.Add(new RowStyle(SizeType.Absolute, 45F));
            tableLayoutPanel6.Size = new Size(227, 86);
            tableLayoutPanel6.TabIndex = 3;
            // 
            // buttonOutputFile
            // 
            buttonOutputFile.Location = new Point(3, 44);
            buttonOutputFile.Name = "buttonOutputFile";
            buttonOutputFile.Size = new Size(135, 23);
            buttonOutputFile.TabIndex = 0;
            buttonOutputFile.Text = "Archivo de Salida";
            buttonOutputFile.UseVisualStyleBackColor = true;
            buttonOutputFile.Click += buttonOutputFile_Click;
            // 
            // labelOutputFile
            // 
            labelOutputFile.AutoSize = true;
            labelOutputFile.Dock = DockStyle.Fill;
            labelOutputFile.Location = new Point(3, 0);
            labelOutputFile.Name = "labelOutputFile";
            labelOutputFile.Size = new Size(221, 41);
            labelOutputFile.TabIndex = 1;
            labelOutputFile.Text = "<vacio>";
            labelOutputFile.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // tableLayoutPanel7
            // 
            tableLayoutPanel7.ColumnCount = 1;
            tableLayoutPanel7.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 50F));
            tableLayoutPanel7.Controls.Add(buttonTemplateFile, 0, 1);
            tableLayoutPanel7.Controls.Add(labelTemplateFile, 0, 0);
            tableLayoutPanel7.Dock = DockStyle.Fill;
            tableLayoutPanel7.Location = new Point(3, 227);
            tableLayoutPanel7.Name = "tableLayoutPanel7";
            tableLayoutPanel7.RowCount = 2;
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel7.RowStyles.Add(new RowStyle(SizeType.Percent, 50F));
            tableLayoutPanel7.Size = new Size(227, 86);
            tableLayoutPanel7.TabIndex = 4;
            // 
            // buttonTemplateFile
            // 
            buttonTemplateFile.Location = new Point(3, 46);
            buttonTemplateFile.Name = "buttonTemplateFile";
            buttonTemplateFile.Size = new Size(135, 23);
            buttonTemplateFile.TabIndex = 0;
            buttonTemplateFile.Text = "Archivo de Template";
            buttonTemplateFile.UseVisualStyleBackColor = true;
            buttonTemplateFile.Click += buttonTemplateFile_Click;
            // 
            // labelTemplateFile
            // 
            labelTemplateFile.AutoSize = true;
            labelTemplateFile.Dock = DockStyle.Fill;
            labelTemplateFile.Location = new Point(3, 0);
            labelTemplateFile.Name = "labelTemplateFile";
            labelTemplateFile.Size = new Size(221, 43);
            labelTemplateFile.TabIndex = 1;
            labelTemplateFile.Text = "<vacio>";
            labelTemplateFile.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Dock = DockStyle.Fill;
            label2.Location = new Point(3, 0);
            label2.Name = "label2";
            label2.Size = new Size(794, 40);
            label2.TabIndex = 1;
            label2.Text = "Interprete Sintáctico";
            label2.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // FormParser
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(tableLayoutPanel1);
            Name = "FormParser";
            Text = "Parser";
            tableLayoutPanel1.ResumeLayout(false);
            tableLayoutPanel1.PerformLayout();
            tableLayoutPanel2.ResumeLayout(false);
            tableLayoutPanel3.ResumeLayout(false);
            tableLayoutPanel3.PerformLayout();
            tableLayoutPanel4.ResumeLayout(false);
            tableLayoutPanel5.ResumeLayout(false);
            tableLayoutPanel5.PerformLayout();
            tableLayoutPanel6.ResumeLayout(false);
            tableLayoutPanel6.PerformLayout();
            tableLayoutPanel7.ResumeLayout(false);
            tableLayoutPanel7.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private TableLayoutPanel tableLayoutPanel1;
        private TableLayoutPanel tableLayoutPanel2;
        private TableLayoutPanel tableLayoutPanel3;
        private TextBox textBoxInput;
        private TextBox textBoxOutput;
        private Label responseHelp;
        private Label label1;
        private TableLayoutPanel tableLayoutPanel4;
        private Label label3;
        private Label label2;
        private Button buttonParse;
        private TableLayoutPanel tableLayoutPanel5;
        private Label labelInputFile;
        private Button buttonInputFile;
        private TableLayoutPanel tableLayoutPanel6;
        private Button buttonOutputFile;
        private TableLayoutPanel tableLayoutPanel7;
        private Button buttonTemplateFile;
        private Label labelOutputFile;
        private Label labelTemplateFile;
    }
}