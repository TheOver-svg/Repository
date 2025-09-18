using System;
using System.Collections.Generic;
using System.IO;
using System.Windows.Forms;

namespace TaxiCom
{
    public partial class Form1 : Form
    {
        private List<Driver> drivers = new List<Driver>();
        private List<Car> cars = new List<Car>();

        public Form1()
        {
            InitializeComponent();
            textBox1.TextChanged += textBox1_TextChanged;
            panelDash.Visible = false;
            label3.Text = ""; label4.Text = ""; label5.Text = ""; label6.Text = ""; label7.Text = ""; label8.Text = "";
            panelDrivers.Visible = false;
            panelVehicle.Visible = false;
            textBox1.Visible = false;
            label13.Visible = false;
            LoadDataFromFile("data.txt"); 
        }

        private void LoadDataFromFile(string path)
        {
            if (!File.Exists(path)) return;

            var lines = File.ReadAllLines(path);

            foreach (var line in lines)
            {
                var parts = line.Split(';');
                if (parts.Length == 0) continue;

                if (parts[0] == "Driver" && parts.Length >= 6)
                {
                    var driver = new Driver
                    {
                        Name = parts[1],
                        IsBusy = bool.Parse(parts[4]),
                        Rating = int.Parse(parts[5]),
                        Cars = new List<Car>
                {
                    new Car { Brand = parts[2], Number = parts[3] }
                }
                    };
                    drivers.Add(driver);
                }
                else if (parts[0] == "Car" && parts.Length >= 5)
                {
                    var car = new Car
                    {
                        Brand = parts[1],
                        Number = parts[2],
                        IsBusy = bool.Parse(parts[3]),
                        Mileage = parts[4]
                    };
                    cars.Add(car);
                }
            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            panelDash.Visible = true;
            
            textBox1.Visible = false;
            label13.Visible = false;
            label2.Text = button1.Text;
            flowLayoutPanelDrivers.Controls.Clear();
            label3.Text = ""; label4.Text = ""; label5.Text = ""; label6.Text = ""; label7.Text = ""; label8.Text = "";
            panelDrivers.Visible = true;
            panelVehicle.Visible = true;

            label11.Text = drivers.Count.ToString();
            label12.Text = cars.Count.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            panelDash.Visible = false;
            textBox1.Visible = false;
            label13.Visible = false;
            panelDrivers.Visible = false;
            panelVehicle.Visible = false;
            label3.Text = "Ім'я"; label4.Text = "Статус"; label5.Text = "Марка"; label6.Text = "Номер авто"; label7.Text = "Рейтинг";
            label8.Text = "_________________________________________________________________________________";
            label2.Text = button2.Text;
            flowLayoutPanelDrivers.Controls.Clear();
            foreach (var driver in drivers)
            {
                string carBrand = driver.Cars.Count > 0 ? driver.Cars[0].Brand : "";
                string carNumber = driver.Cars.Count > 0 ? driver.Cars[0].Number : "";
                var driverCard = new DriverCard(driver.Name, carBrand, carNumber, driver.IsBusy, driver.Rating);
                flowLayoutPanelDrivers.Controls.Add(driverCard);
            }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            panelDash.Visible = false;
            textBox1.Visible = false;
            label13.Visible = false;
            panelDrivers.Visible = false;
            panelVehicle.Visible = false;
            label3.Text = "Марка"; label4.Text = "    Номер"; label5.Text = "       Статус"; label6.Text = "         Пробіг"; label7.Text = "";
            label8.Text = "_________________________________________________________________________________";
            label2.Text = button3.Text;
            flowLayoutPanelDrivers.Controls.Clear();

            foreach (var car in cars)
            {
                var carCard = new CarCard(car.Brand, car.Number, car.IsBusy, car.Mileage);
                flowLayoutPanelDrivers.Controls.Add(carCard);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            panelDash.Visible = false;
            textBox1.Visible = false;
            label13.Visible = false;
            panelDrivers.Visible = false;
            panelVehicle.Visible = false;
            label2.Text = button4.Text;
            flowLayoutPanelDrivers.Controls.Clear();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            string query = textBox1.Text.ToLower();
            flowLayoutPanelDrivers.Controls.Clear();
            foreach (var driver in drivers)
            {
                if (driver.Name.ToLower().Contains(query) ||
                    driver.Cars.Exists(c => c.Brand.ToLower().Contains(query) || c.Number.ToLower().Contains(query)))
                {
                    string carBrand = driver.Cars.Count > 0 ? driver.Cars[0].Brand : "";
                    string carNumber = driver.Cars.Count > 0 ? driver.Cars[0].Number : "";
                    var driverCard = new DriverCard(driver.Name, carBrand, carNumber, driver.IsBusy, driver.Rating);
                    flowLayoutPanelDrivers.Controls.Add(driverCard);
                }
            }
            foreach (var car in cars)
            {
                if (car.Brand.ToLower().Contains(query) || car.Number.ToLower().Contains(query))
                {
                    var carCard = new CarCard(car.Brand, car.Number, car.IsBusy, car.Mileage);
                    flowLayoutPanelDrivers.Controls.Add(carCard);
                }
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            panelDash.Visible = false;
            textBox1.Visible = true;
            label13.Visible = true;
            panelDrivers.Visible = false;
            panelVehicle.Visible = false;
            label3.Text = "Ім'я"; label4.Text = "Статус"; label5.Text = "Марка"; label6.Text = "Номер авто"; label7.Text = "Рейтинг";
            label8.Text = "_________________________________________________________________________________";
            label2.Text = button5.Text;
            flowLayoutPanelDrivers.Controls.Clear();
        }

        private void buttonAddDriver_Click(object sender, EventArgs e)
        {
            AddDriver inputForm = new AddDriver();
            Form popup = new Form
            {
                Text = "Додати водія",
                Size = new System.Drawing.Size(300, 300),
                StartPosition = FormStartPosition.CenterParent
            };

            inputForm.Dock = DockStyle.Fill;
            popup.Controls.Add(inputForm);

            Button btnOk = new Button { Text = "OK", Dock = DockStyle.Bottom };
            btnOk.Click += (s, ev) =>
            {
                var driver = new Driver
                {
                    Name = inputForm.DriverName,
                    IsBusy = inputForm.IsBusy,
                    Rating = inputForm.Rating,
                    Cars = new List<Car>
            {
                new Car { Brand = inputForm.CarBrand, Number = inputForm.CarNumber, IsBusy = inputForm.IsBusy, Mileage = "0" }
            }
                };

                drivers.Add(driver);
                var driverCard = new DriverCard(driver.Name, inputForm.CarBrand, inputForm.CarNumber, driver.IsBusy, driver.Rating);
                flowLayoutPanelDrivers.Controls.Add(driverCard);
                string filePath = "data.txt";
                string line = $"Driver;{driver.Name};{inputForm.CarBrand};{inputForm.CarNumber};{driver.IsBusy};{driver.Rating}";
                File.AppendAllText(filePath, line + Environment.NewLine);

                popup.Close();
            };

            popup.Controls.Add(btnOk);
            popup.ShowDialog();
        }


        private void buttonDeleteDriver_Click(object sender, EventArgs e)
        {
            
        }

        private void buttonChangeCar_Click(object sender, EventArgs e)
        {

        }

        private void buttonAddCar_Click(object sender, EventArgs e)
        {

        }

        private void buttonDeleteCar_Click(object sender, EventArgs e)
        {

        }

        private void buttonChangePlate_Click(object sender, EventArgs e)
        {

        }
    }

    public class Driver
    {
        public string Name { get; set; }
        public bool IsBusy { get; set; }
        public int Rating { get; set; }
        public List<Car> Cars { get; set; } = new List<Car>();
    }

    public class Car
    {
        public string Brand { get; set; }
        public string Number { get; set; }
        public bool IsBusy { get; set; }
        public string Mileage { get; set; }
    }
}
