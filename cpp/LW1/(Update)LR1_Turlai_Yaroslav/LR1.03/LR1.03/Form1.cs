using System;
using System.Drawing;
using System.Windows.Forms;

namespace LR1._03
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label1.Text = "";
            label2.Text = "";
            label3.Text = "";
            label4.Text = "";
            label5.Text = "";
        }

        class Candy
        {
            private string name;
            private double weight;
            private double price;

            public Candy()
            {
                name = "Карамелька";
                weight = 20;
                price = 5;
            }

            public Candy(string n, double w, double p)
            {
                name = n;
                weight = w;
                price = p;
            }

            public double PricePerKg()
            {
                return price / weight * 1000;
            }

            public CandyControl GetCandyControl()
            {
                CandyControl candyControl = new CandyControl();
                candyControl.CandyName = name;
                candyControl.Weight = weight;
                candyControl.Price = price;
                candyControl.PricePerKg = PricePerKg();
                return candyControl;
            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Candy c1 = new Candy();
            CandyControl control = c1.GetCandyControl();
            flowLayoutPanel1.Controls.Add(control);
            label1.Text = "Назва";
            label2.Text = "Вага";
            label3.Text = "Ціна";
            label4.Text = "________________________________________________________________";
            label5.Text = "Ціна за кг";
        }


        private void button2_Click(object sender, EventArgs e)
        {
            using (CandyInputForm inputForm = new CandyInputForm())
            {
                if (inputForm.ShowDialog() == DialogResult.OK)
                {
                    CandyControl candyControl = new CandyControl();
                    candyControl.CandyName = inputForm.CandyName;
                    candyControl.Weight = inputForm.Weight;
                    candyControl.Price = inputForm.Price;
                    candyControl.PricePerKg = inputForm.PricePerKg;

                    flowLayoutPanel1.Controls.Add(candyControl);

                    label1.Text = "Назва";
                    label2.Text = "Вага";
                    label3.Text = "Ціна";
                    label4.Text = "________________________________________________________________";
                    label5.Text = "Ціна за кг";
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
