using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace TaxiCom
{
    internal static class Program
    {
        
        [DllImport("user32.dll")]
        private static extern bool SetProcessDPIAware();

        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            // викликаємо перед запуском форми
            SetProcessDPIAware();

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }
}
