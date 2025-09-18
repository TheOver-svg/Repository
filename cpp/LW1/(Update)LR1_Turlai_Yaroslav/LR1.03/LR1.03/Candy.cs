using System;
using System.Windows.Forms;

namespace LR1._03
{
    public partial class CandyControl : UserControl
    {
        public string CandyName { get; set; }
        public double Weight { get; set; }
        public double Price { get; set; }
        public double PricePerKg {  get; set; }

        public CandyControl()
        {
            InitializeComponent();
            this.Load += CandyControl_Load;
        }

        private void CandyControl_Load(object sender, EventArgs e)
        {
            label1.Text = CandyName;
            label2.Text = Weight.ToString() + " г";
            label3.Text = Price.ToString() + " грн";
            label4.Text = PricePerKg.ToString() + " грн";
        }
    }
}
