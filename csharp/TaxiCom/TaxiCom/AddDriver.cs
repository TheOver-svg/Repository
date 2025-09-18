using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls.Primitives;
using System.Windows.Forms;

namespace TaxiCom
{
    public partial class AddDriver : UserControl
    {
        public string DriverName => textBoxName.Text;
        public string CarBrand => textBoxBrand.Text;
        public string CarNumber => textBoxNumber.Text;
        public int Rating => int.TryParse(textBoxRating.Text, out int r) ? r : 0;
        public bool IsBusy => checkBoxBusy.Checked;
        public AddDriver()
        {
            InitializeComponent();
        }
    }
}
