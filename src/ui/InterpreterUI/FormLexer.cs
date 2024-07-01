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
using static System.Windows.Forms.DataFormats;

namespace Interpreter
{
    public partial class FormLexer : Form
    {
        private Form1 form1;
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
            InterpreterResult interpreterResult = InterpreterHelper.lexFromString(TextInputBox.Text);
            if (interpreterResult.Text == null)
            {
                OutputTextBox.Text = string.Empty;
            }
            else
            {
                OutputTextBox.Text = interpreterResult.Text;
            }

            timer.Stop();
        }

        private void ExitButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btnAtras_Click(object sender, EventArgs e)
        {
            if (form1 == null || form1.IsDisposed)
            {
                form1 = new Form1();
                form1.Show();
            }

            this.Hide();
        }

        private void btnCloseP_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void buttonInputFile_Click(object sender, EventArgs e)
        {
            string? fileDialogResponse = showOpenFileDialog();
            if (fileDialogResponse != null)
            {
                if (Path.GetExtension(fileDialogResponse) != ".json")
                {
                    MessageBox.Show("El archivo de entrada debe tener extensión \".json\"");
                    return;
                }
                OutputTextBox.Text = string.Empty; //limpia el textbox para evitar errores
                this.labelInputFile.Text = Path.GetFileName(fileDialogResponse);

                string fileContent = File.ReadAllText(fileDialogResponse);
                TextInputBox.Text = fileContent;

            }
            else
            {
                return;
            }
        }
        private string? showOpenFileDialog()
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Filter = "JSON files (*.json)|*.json|All files (*.*)|*.*";
            openFileDialog.Title = "Seleccione un archivo JSON";
            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                return openFileDialog.FileName;
            }
            return null;
        }
    }
}
