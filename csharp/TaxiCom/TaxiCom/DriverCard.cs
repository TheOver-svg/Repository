using System;
using System.Windows.Forms;

namespace TaxiCom
{
    public partial class DriverCard : UserControl
    {
        public DriverCard(string name, string Model, string car, bool isBusy, int rating)
        {
            InitializeComponent();
            labelName.Text = name;
            labelStatus.Text = isBusy ? "Зайнятий" : "Вільний";
            labelModel.Text = Model;
            labelCar.Text = car;
            labelStatus.ForeColor = isBusy ? System.Drawing.Color.Red : System.Drawing.Color.Green;
            labelRating.Text = rating + "/5";
        }
    }
}
