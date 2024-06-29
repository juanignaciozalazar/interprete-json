using InterpreterUI;
using System.Configuration;

namespace Interpreter
{
    public partial class Form1 : Form
    {
        private FormLexer formLexer;
        private FormParser formParser;
        OpenFileDialog openFileDialog;

        public Form1()
        {
            InitializeComponent();
            openFileDialog = new OpenFileDialog();
            openFileDialog.DefaultExt = "dll";
            openFileDialog.AddExtension = true;

        }

        private void formLexer_init()
        {
            if (formLexer == null || formParser.IsDisposed)
            {
                formLexer = new FormLexer();
                formLexer.FormClosing += _frm1_closing;
            }
        }

        private void formParser_init()
        {
            if (formParser == null || formParser.IsDisposed)
            {
                formParser = new FormParser();
                formParser.FormClosing += _frm1_closing;
            }
        }

        private void buttonExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
        
        private void _frm1_closing(object? sender, EventArgs e)
        {
            this.Show();
        }

        private void ConfigButton_Click(object sender, EventArgs e)
        {
            setInterpreterFileDialog();
        }

        private bool setInterpreterFileDialog()
        {

            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {

                Program.AddUpdateAppSettings(Program.interpreterKey, openFileDialog.FileName);
                Program.configFile!.Save(ConfigurationSaveMode.Modified);
                ConfigurationManager.RefreshSection(Program.configFile.AppSettings.SectionInformation.Name);

                return true;
            }
            return false;
        }

        private void buttonParser_Click(object sender, EventArgs e)
        {
            if (Program.ReadSetting(Program.interpreterKey) == null || !File.Exists(Program.ReadSetting(Program.interpreterKey).ToString()))
            {
                while (true)
                {
                    var result = setInterpreterFileDialog();

                    if (!result)
                    {
                        string message = "No se pudo leer el archivo especificado. Desea intentar de nuevo?";
                        string title = "Archivo no encontrado";
                        MessageBoxButtons buttons = MessageBoxButtons.YesNo;
                        DialogResult response = MessageBox.Show(message, title, buttons);
                        if (response == DialogResult.Yes)
                        {
                            continue;
                        }
                        else
                        {
                            return;
                        }
                    }

                    break;
                }
            }

            formParser_init();
            formParser.Show();
            this.Hide();
        }

        private void buttonLexer_Click(object sender, EventArgs e)
        {
            if (Program.ReadSetting(Program.interpreterKey) == null || !File.Exists(Program.ReadSetting(Program.interpreterKey).ToString()))
            {
                while (true)
                {
                    var result = setInterpreterFileDialog();

                    if (!result)
                    {
                        string message = "No se pudo leer el archivo especificado. Desea intentar de nuevo?";
                        string title = "Archivo no encontrado";
                        MessageBoxButtons buttons = MessageBoxButtons.YesNo;
                        DialogResult response = MessageBox.Show(message, title, buttons);
                        if (response == DialogResult.Yes)
                        {
                            continue;
                        }
                        else
                        {
                            return;
                        }
                    }

                    break;
                }
            }
            formLexer_init();
            formLexer.Show();
            this.Hide();
        }
    }
}
