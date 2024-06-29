using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Transactions;
using System.Windows.Forms;

namespace Interpreter
{
    public partial class FormLexer : Form
    {


        private System.Windows.Forms.Timer timer;

        private const int TEXT_TIMEOUT_DELAY = 500;

        public FormLexer()
        {
            InitializeComponent();
            timer = new System.Windows.Forms.Timer();
            timer.Tick += _tmrDelaySearch_Tick;
            timer.Interval = TEXT_TIMEOUT_DELAY;
        }

        void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            // Terminar la ejecución del programa
            Application.Exit();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void tableLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void TextInputBox_textChanged(object sender, EventArgs e)
        {
            if (timer.Enabled)
            {
                timer.Stop();
            }
            timer.Start();
        }

        private void _tmrDelaySearch_Tick(object? sender, EventArgs e)
        {
            string lexedString = InterpreterHelper.lexFromString(TextInputBox.Text);
            if (lexedString == null)
            {
                OutputTextBox.Text = string.Empty;
            }
            else
            {
                OutputTextBox.Text = lexedString;
            }

            timer.Stop();
        }

        private void ExitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
