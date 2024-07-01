using Interpreter;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.DataFormats;

namespace InterpreterUI
{
    public partial class FormParser : Form
    {
        private Form1 form1;
        private System.Windows.Forms.Timer timer;
        private const int TEXT_TIMEOUT_DELAY = 500;
        private OpenFileDialog openFileDialogJson;

        string? inputFilePath = null;
        string? outputFilePath = null;
        string? templateFilePath = null;

        public FormParser()
        {
            InitializeComponent();
            timer = new System.Windows.Forms.Timer();
            timer.Tick += _tmrDelayExecution_Tick;
            timer.Interval = TEXT_TIMEOUT_DELAY;
        }

        private void _tmrDelayExecution_Tick(object? sender, EventArgs e)
        {
            InterpreterResult interpreterResult = InterpreterHelper.parseFromString(textBoxInput.Text);
            if (interpreterResult.Text == null)
            {
                textBoxOutput.Text = string.Empty;
            }
            else
            {
                textBoxOutput.Text = interpreterResult.Text;
            }

            if ( !interpreterResult.Success)
            {
                buttonOutputFile.Enabled = false;
                txtOutputFile.Enabled = false;
                lblEstado.Text = "<Estado: invalido>";
                lblEstado.ForeColor = Color.Red;
            }
            else
            {
                lblEstado.Text = "<Estado: valido>";
                lblEstado.ForeColor = Color.Lime;
                //textBoxInput.Enabled = false;
                buttonOutputFile.Enabled = true;
                txtOutputFile.Enabled = true;

            }

            timer.Stop();
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
                textBoxOutput.Text = string.Empty; //limpia el textbox para evitar errores
                this.inputFilePath = fileDialogResponse;
                this.labelInputFile.Text = Path.GetFileName(fileDialogResponse);

                string fileContent = File.ReadAllText(fileDialogResponse);
                textBoxInput.Text = fileContent;

                buttonParse.Enabled = true;
            }
            else
            {
                return;
            }


        }

        private void buttonOutputFile_Click(object sender, EventArgs e)
        {
            string? folderDialogResponse = showSaveFileDialog();
            if (folderDialogResponse != null)
            {
                this.outputFilePath = folderDialogResponse;
                this.txtOutputFile.Text = folderDialogResponse;
            }
            txtOutputFile.ForeColor = System.Drawing.Color.Black;
            buttonParse.Enabled = true;
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
        private string? showSaveFileDialog()
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.Filter = "HTML files (*.html)|*.html|All files (*.*)|*.*";
            saveFileDialog.Title = "Seleccione un archivo de salida HTML";

            if (saveFileDialog.ShowDialog() == DialogResult.OK)
            {
                return saveFileDialog.FileName;
            }
            return null;
        }

        private void buttonParse_Click(object sender, EventArgs e)
        {
            if (inputFilePath != null)
            {
                InterpreterHelper.parseFromFile(inputFilePath, outputFilePath, templateFilePath);
            }
        }

        private void textBoxInput_textChanged(object sender, EventArgs e)
        {
            if (timer.Enabled)
            {
                timer.Stop();
            }
            timer.Start();
        }

        private void btnCloseP_Click(object sender, EventArgs e)
        {
            Application.Exit();
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
        private void txtOutputFile_Enter(object sender, EventArgs e)
        {
            if (txtOutputFile.Text == "Escribir directorio")
            {
                txtOutputFile.Text = "";
                txtOutputFile.ForeColor = System.Drawing.Color.Black;
            }
        }

        private void txtOutputFile_Leave(object sender, EventArgs e)
        {
            if (string.IsNullOrWhiteSpace(txtOutputFile.Text))
            {
                txtOutputFile.Text = "Escribir directorio";
                txtOutputFile.ForeColor = System.Drawing.Color.Gray;
            }
        }
    }
}
