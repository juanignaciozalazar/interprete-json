using System.Configuration;

namespace Lexer
{
    public partial class Form1 : Form
    {
        private Form2 form2;
        OpenFileDialog openFileDialog;

        public Form1()
        {
            InitializeComponent();
            form2 = new Form2();
            form2.FormClosing += _frm1_closing;
            openFileDialog = new OpenFileDialog();
            openFileDialog.DefaultExt = "dll";
            openFileDialog.AddExtension = true;

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            if (Program.ReadSetting(Program.interpreterKey) == null || !File.Exists( Program.ReadSetting(Program.interpreterKey).ToString() ) )
            {
                while ( true )
                {
                    var result = setInterpreterFileDialog();

                    if ( !result )
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
            form2.Show();
            this.Hide();
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
    }
}
