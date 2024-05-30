namespace Lexer
{
    public partial class Form1 : Form
    {
        private Form2 form2;

        public Form1()
        {
            InitializeComponent();
            form2 = new Form2();
            form2.FormClosed += _frm1_closed;
        }

        private void button2_Click(object sender, EventArgs e)
        {            
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            form2.Show();
            this.Hide();
        }

        private void _frm1_closed(object? sender, EventArgs e)
        {
            this.Show();
        }
    }
}
