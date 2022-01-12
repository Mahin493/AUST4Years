
namespace Assignment02
{
    partial class Form2
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.User = new System.Windows.Forms.TextBox();
            this.pass = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.up1 = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.am1 = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.up2 = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.am2 = new System.Windows.Forms.TextBox();
            this.label10 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.up3 = new System.Windows.Forms.TextBox();
            this.label12 = new System.Windows.Forms.Label();
            this.am3 = new System.Windows.Forms.TextBox();
            this.label13 = new System.Windows.Forms.Label();
            this.up4 = new System.Windows.Forms.TextBox();
            this.label14 = new System.Windows.Forms.Label();
            this.label15 = new System.Windows.Forms.Label();
            this.am4 = new System.Windows.Forms.TextBox();
            this.label16 = new System.Windows.Forms.Label();
            this.label17 = new System.Windows.Forms.Label();
            this.up5 = new System.Windows.Forms.TextBox();
            this.label18 = new System.Windows.Forms.Label();
            this.am5 = new System.Windows.Forms.TextBox();
            this.label19 = new System.Windows.Forms.Label();
            this.total_textbox = new System.Windows.Forms.TextBox();
            this.total_button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 135);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(132, 25);
            this.label1.TabIndex = 3;
            this.label1.Text = "User Name :";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(19, 217);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(125, 25);
            this.label2.TabIndex = 4;
            this.label2.Text = "Password : ";
            // 
            // User
            // 
            this.User.Location = new System.Drawing.Point(196, 139);
            this.User.Name = "User";
            this.User.Size = new System.Drawing.Size(176, 22);
            this.User.TabIndex = 5;
            // 
            // pass
            // 
            this.pass.Location = new System.Drawing.Point(196, 217);
            this.pass.Name = "pass";
            this.pass.Size = new System.Drawing.Size(176, 22);
            this.pass.TabIndex = 6;
            this.pass.TextChanged += new System.EventHandler(this.pass_textchanged);
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(211, 310);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(135, 24);
            this.comboBox1.TabIndex = 7;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox_Indexchanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(19, 309);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(155, 25);
            this.label3.TabIndex = 8;
            this.label3.Text = "Currency Type";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(627, 21);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(131, 29);
            this.label4.TabIndex = 9;
            this.label4.Text = "Product 1:";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(627, 82);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(103, 25);
            this.label5.TabIndex = 10;
            this.label5.Text = "Unit price";
            // 
            // up1
            // 
            this.up1.Location = new System.Drawing.Point(749, 86);
            this.up1.Name = "up1";
            this.up1.Size = new System.Drawing.Size(80, 22);
            this.up1.TabIndex = 11;
            this.up1.TextChanged += new System.EventHandler(this.up1_TextChanged);
            this.up1.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(867, 86);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(86, 25);
            this.label6.TabIndex = 12;
            this.label6.Text = "Amount";
            // 
            // am1
            // 
            this.am1.Location = new System.Drawing.Point(1012, 90);
            this.am1.Name = "am1";
            this.am1.Size = new System.Drawing.Size(80, 22);
            this.am1.TabIndex = 13;
            this.am1.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(627, 139);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(131, 29);
            this.label7.TabIndex = 14;
            this.label7.Text = "Product 2:";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label8.Location = new System.Drawing.Point(627, 188);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(103, 25);
            this.label8.TabIndex = 15;
            this.label8.Text = "Unit price";
            // 
            // up2
            // 
            this.up2.Location = new System.Drawing.Point(749, 191);
            this.up2.Name = "up2";
            this.up2.Size = new System.Drawing.Size(80, 22);
            this.up2.TabIndex = 16;
            this.up2.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label9.Location = new System.Drawing.Point(867, 191);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(86, 25);
            this.label9.TabIndex = 17;
            this.label9.Text = "Amount";
            // 
            // am2
            // 
            this.am2.Location = new System.Drawing.Point(1012, 192);
            this.am2.Name = "am2";
            this.am2.Size = new System.Drawing.Size(80, 22);
            this.am2.TabIndex = 18;
            this.am2.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label10.Location = new System.Drawing.Point(627, 252);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(131, 29);
            this.label10.TabIndex = 19;
            this.label10.Text = "Product 3:";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label11.Location = new System.Drawing.Point(627, 306);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(103, 25);
            this.label11.TabIndex = 20;
            this.label11.Text = "Unit price";
            // 
            // up3
            // 
            this.up3.Location = new System.Drawing.Point(749, 310);
            this.up3.Name = "up3";
            this.up3.Size = new System.Drawing.Size(80, 22);
            this.up3.TabIndex = 21;
            this.up3.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label12.Location = new System.Drawing.Point(867, 306);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(86, 25);
            this.label12.TabIndex = 22;
            this.label12.Text = "Amount";
            // 
            // am3
            // 
            this.am3.Location = new System.Drawing.Point(1012, 306);
            this.am3.Name = "am3";
            this.am3.Size = new System.Drawing.Size(80, 22);
            this.am3.TabIndex = 23;
            this.am3.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label13.Location = new System.Drawing.Point(627, 376);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(131, 29);
            this.label13.TabIndex = 24;
            this.label13.Text = "Product 4:";
            // 
            // up4
            // 
            this.up4.Location = new System.Drawing.Point(749, 443);
            this.up4.Name = "up4";
            this.up4.Size = new System.Drawing.Size(80, 22);
            this.up4.TabIndex = 25;
            this.up4.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label14.Location = new System.Drawing.Point(627, 439);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(103, 25);
            this.label14.TabIndex = 26;
            this.label14.Text = "Unit price";
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label15.Location = new System.Drawing.Point(867, 440);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(86, 25);
            this.label15.TabIndex = 27;
            this.label15.Text = "Amount";
            // 
            // am4
            // 
            this.am4.Location = new System.Drawing.Point(1012, 440);
            this.am4.Name = "am4";
            this.am4.Size = new System.Drawing.Size(80, 22);
            this.am4.TabIndex = 28;
            this.am4.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label16
            // 
            this.label16.AutoSize = true;
            this.label16.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label16.Location = new System.Drawing.Point(627, 506);
            this.label16.Name = "label16";
            this.label16.Size = new System.Drawing.Size(131, 29);
            this.label16.TabIndex = 29;
            this.label16.Text = "Product 5:";
            // 
            // label17
            // 
            this.label17.AutoSize = true;
            this.label17.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label17.Location = new System.Drawing.Point(627, 566);
            this.label17.Name = "label17";
            this.label17.Size = new System.Drawing.Size(103, 25);
            this.label17.TabIndex = 30;
            this.label17.Text = "Unit price";
            // 
            // up5
            // 
            this.up5.Location = new System.Drawing.Point(749, 566);
            this.up5.Name = "up5";
            this.up5.Size = new System.Drawing.Size(80, 22);
            this.up5.TabIndex = 31;
            this.up5.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label18
            // 
            this.label18.AutoSize = true;
            this.label18.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label18.Location = new System.Drawing.Point(867, 563);
            this.label18.Name = "label18";
            this.label18.Size = new System.Drawing.Size(86, 25);
            this.label18.TabIndex = 32;
            this.label18.Text = "Amount";
            // 
            // am5
            // 
            this.am5.Location = new System.Drawing.Point(1012, 569);
            this.am5.Name = "am5";
            this.am5.Size = new System.Drawing.Size(80, 22);
            this.am5.TabIndex = 33;
            this.am5.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.up1_keypressed);
            // 
            // label19
            // 
            this.label19.AutoSize = true;
            this.label19.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label19.Location = new System.Drawing.Point(617, 646);
            this.label19.Name = "label19";
            this.label19.Size = new System.Drawing.Size(141, 29);
            this.label19.TabIndex = 34;
            this.label19.Text = "Total Price";
            // 
            // total_textbox
            // 
            this.total_textbox.Location = new System.Drawing.Point(819, 646);
            this.total_textbox.Name = "total_textbox";
            this.total_textbox.Size = new System.Drawing.Size(177, 22);
            this.total_textbox.TabIndex = 35;
            // 
            // total_button
            // 
            this.total_button.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.total_button.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.total_button.Location = new System.Drawing.Point(130, 506);
            this.total_button.Name = "total_button";
            this.total_button.Size = new System.Drawing.Size(191, 64);
            this.total_button.TabIndex = 36;
            this.total_button.Text = "Total Price";
            this.total_button.UseVisualStyleBackColor = false;
            this.total_button.Click += new System.EventHandler(this.total_buttonClicked);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1219, 713);
            this.Controls.Add(this.total_button);
            this.Controls.Add(this.total_textbox);
            this.Controls.Add(this.label19);
            this.Controls.Add(this.am5);
            this.Controls.Add(this.label18);
            this.Controls.Add(this.up5);
            this.Controls.Add(this.label17);
            this.Controls.Add(this.label16);
            this.Controls.Add(this.am4);
            this.Controls.Add(this.label15);
            this.Controls.Add(this.label14);
            this.Controls.Add(this.up4);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.am3);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.up3);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.am2);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.up2);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.am1);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.up1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.pass);
            this.Controls.Add(this.User);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form2";
            this.Text = "Form2";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox User;
        private System.Windows.Forms.TextBox pass;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox up1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox am1;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox up2;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.TextBox am2;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.TextBox up3;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.TextBox am3;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.TextBox up4;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.TextBox am4;
        private System.Windows.Forms.Label label16;
        private System.Windows.Forms.Label label17;
        private System.Windows.Forms.TextBox up5;
        private System.Windows.Forms.Label label18;
        private System.Windows.Forms.TextBox am5;
        private System.Windows.Forms.Label label19;
        private System.Windows.Forms.TextBox total_textbox;
        private System.Windows.Forms.Button total_button;
    }
}