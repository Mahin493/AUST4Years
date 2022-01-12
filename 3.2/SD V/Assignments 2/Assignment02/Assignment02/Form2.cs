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
    public partial class Form2 : Form
    {
        public Form2(String x,String y)
        {
            InitializeComponent();
            User.Text = x;
            pass.Text = y;
            comboBox1.Items.Add("US Dollar");
            comboBox1.Items.Add("Rupee");
            comboBox1.Items.Add("Canadian Dollar");
            comboBox1.Items.Add("Japanese Yen");

        }

        private void comboBox_Indexchanged(object sender, EventArgs e)
        {

        }

        private void pass_textchanged(object sender, EventArgs e)
        {

        }

        

        private void up1_TextChanged(object sender, EventArgs e)
        {

        }
        private void total_buttonClicked(object sender, EventArgs e)
        {
            int U_price1, U_price2, U_price3, U_price4, U_price5, amount1, amount2, amount3, amount4, amount5, p;
            double m;

            if (up1.Text.Trim() == "" || up2.Text.Trim() == "" || up3.Text.Trim() == ""
                || up4.Text.Trim() == "" || up5.Text.Trim() == "")
            {
                MessageBox.Show("Unit price cannot be empty", "Error!", MessageBoxButtons.RetryCancel, MessageBoxIcon.Error);

                return;
            }

            if (am1.Text.Trim() == "" || am2.Text.Trim() == "" || am3.Text.Trim() == ""
                || am4.Text.Trim() == "" || am5.Text.Trim() == "")
            {
                MessageBox.Show("Product Amount cannot be empty", "Error!", MessageBoxButtons.RetryCancel, MessageBoxIcon.Error);


                return;

            }

            amount1 = Convert.ToInt32(am1.Text);
            amount2 = Convert.ToInt32(am2.Text);
            amount3 = Convert.ToInt32(am3.Text);
            amount4 = Convert.ToInt32(am4.Text);
            amount5 = Convert.ToInt32(am5.Text);
            U_price1 = Convert.ToInt32(up1.Text);
            U_price2 = Convert.ToInt32(up2.Text);
            U_price3 = Convert.ToInt32(up3.Text);
            U_price4 = Convert.ToInt32(up4.Text);
            U_price5 = Convert.ToInt32(up5.Text);


            if (U_price1 >= 1 && U_price1 <= 100 && U_price2 >= 1 && U_price2 <= 100 && U_price3 >= 1 && U_price3 <= 100
                && U_price4 >= 1 && U_price4 <= 100 && U_price5 >= 1 && U_price5 <= 100 && amount1 >= 1 && amount1 <= 10 && amount2 >= 1 && amount2 <= 10
                 && amount3 >= 1 && amount3 <= 10 && amount4 >= 1 && amount4 <= 10 && amount5 >= 1 && amount5 <= 10)
            {
                p = U_price1 * amount1 + U_price2 * amount2 + U_price3 * amount3 + U_price4 * amount4 + U_price5 * amount5;

                if (comboBox1.Text == "US Dollar")
                {
                    m = Convert.ToDouble(p * 0.012);

                    total_textbox.Text = Convert.ToString(m);
                }
                if (comboBox1.Text == "Rupee")
                {
                    m = Convert.ToDouble(p * 0.86);

                    total_textbox.Text = Convert.ToString(m);
                }

                
                if (comboBox1.Text == "Canadian Dollar")
                {
                    m = Convert.ToDouble(p * 0.015);

                    total_textbox.Text = Convert.ToString(m);
                }
                if (comboBox1.Text == "Japanese Yen")
                {
                    m = Convert.ToDouble(p * 1.22);

                    total_textbox.Text = Convert.ToString(m);
                }

                if (comboBox1.Text == "")
                {
                    m = Convert.ToDouble(p * 1);

                    total_textbox.Text = Convert.ToString(m);
                }
            }

            else
            {
                MessageBox.Show("Invalid Input ", "Detail", MessageBoxButtons.OK);
            }


        }

        private void up1_keypressed(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
                DialogResult da = MessageBox.Show("Enter only Digit ", "Error", MessageBoxButtons.OK);
            }
        }

        private void am1_keypressed(object sender, KeyPressEventArgs e)
        {

        }

        private void up2_keypressed(object sender, KeyPressEventArgs e)
        {

        }

        private void am2_keypressed(object sender, KeyPressEventArgs e)
        {

        }
    }
}
