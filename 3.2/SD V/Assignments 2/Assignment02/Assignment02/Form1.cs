using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void User_Textchanged(object sender, EventArgs e)
        {

        }

        

        private void Loginbutton_clicked(object sender, EventArgs e)
        {
            string user = User_textbox.Text;
            string pass = Pass_textbox.Text;
            if (user == "Mahin" && pass == "170204006")
            {

                Form2 form = new Form2(user, pass);
                form.Show();
                this.Visible = false;

            }
            else
            {

                DialogResult res = MessageBox.Show("Username or password didn't match", "Error!", MessageBoxButtons.RetryCancel, MessageBoxIcon.Error);
                if (res == DialogResult.Retry)
                {
                    User_textbox.ResetText();
                    Pass_textbox.ResetText();
                }
            }
        }
        private void Password_Textchanged(object sender, EventArgs e)
        {

        }
    }
}
