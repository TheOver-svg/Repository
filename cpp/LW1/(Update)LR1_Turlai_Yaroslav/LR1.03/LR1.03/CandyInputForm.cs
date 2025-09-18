using System;
using System.Windows.Forms;

namespace LR1._03
{
    public partial class CandyInputForm : Form
    {
        public string CandyName { get; private set; }
        public double Weight { get; private set; }
        public double Price { get; private set; }

        public double PricePerKg { get; private set; }

        public CandyInputForm()
        {
            InitializeComponent();
        }

        private void buttonOk_Click(object sender, EventArgs e)
        {
            CandyName = textBoxName.Text;
            if (!double.TryParse(textBoxWeight.Text, out double w))
            {
                MessageBox.Show("Введіть правильну вагу!");
                return;
            }
            Weight = w;

            if (!double.TryParse(textBoxPrice.Text, out double p))
            {
                MessageBox.Show("Введіть правильну ціну!");
                return;
            }
            Price = p;

            this.DialogResult = DialogResult.OK;
            this.Close();
        }

        private void buttonCancel_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.Cancel;
            this.Close();
        }
    }
}
