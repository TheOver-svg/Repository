using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Media;
using System.Xml.Linq;

namespace TaxiCom
{
    public partial class CarCard : UserControl
    {
        public CarCard(string Model, string car, bool isBusy, string distance)
        {
            InitializeComponent();
            labelModel.Text = Model;
            labelStatus.Text = isBusy ? "Зайнятий" : "Вільний";
            labelCar.Text = car;
            labelStatus.ForeColor = isBusy ? System.Drawing.Color.Red : System.Drawing.Color.Green;
            labelDistance.Text = distance + "км";
        }
    }
}
