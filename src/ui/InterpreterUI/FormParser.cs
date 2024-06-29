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

namespace InterpreterUI
{
    public partial class FormParser : Form
    {
        private System.Windows.Forms.Timer timer;
        private const int TEXT_TIMEOUT_DELAY = 500;


        string? inputFilePath = null;
        string? outputFilePath = null;
        string? templateFilePath = null;

        public FormParser()
        {
            InitializeComponent();
            timer = new System.Windows.Forms.Timer();
            timer.Tick += _tmrDelaySearch_Tick;
            timer.Interval = TEXT_TIMEOUT_DELAY;
        }

        private void _tmrDelaySearch_Tick(object? sender, EventArgs e)
        {
            string parsedString = InterpreterHelper.parseFromString(textBoxInput.Text);
            if (parsedString == null)
            {
                textBoxOutput.Text = string.Empty;
            }
            else
            {
                textBoxOutput.Text = parsedString;
            }

            timer.Stop();
        }

        private void buttonInputFile_Click(object sender, EventArgs e)
        {
            string? fileDialogResponse = showOpenFileDialog();
            if (fileDialogResponse != null)
            {
                this.inputFilePath = fileDialogResponse;
                this.labelInputFile.Text = Path.GetFileName(fileDialogResponse);
            }
            else
            {
                return;
            }
        }

        private void buttonOutputFile_Click(object sender, EventArgs e)
        {
            string? fileDialogResponse = showSaveFileDialog();
            if (fileDialogResponse != null)
            {
                this.outputFilePath = fileDialogResponse;
                this.labelOutputFile.Text = Path.GetFileName(fileDialogResponse);
            }
            else
            {
                return;
            }
        }

        private void buttonTemplateFile_Click(object sender, EventArgs e)
        {
            string? fileDialogResponse = showOpenFileDialog();
            if (fileDialogResponse != null)
            {
                this.templateFilePath = fileDialogResponse;
                this.labelTemplateFile.Text = Path.GetFileName(fileDialogResponse);
            }
            else
            {
                return;
            }
        }

        private string? showOpenFileDialog()
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                return openFileDialog.FileName;
            }
            return null;
        }

        private string? showSaveFileDialog()
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
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
    }
}
