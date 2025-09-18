namespace TaxiCom
{
    partial class DriverCard
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.labelName = new System.Windows.Forms.Label();
            this.labelStatus = new System.Windows.Forms.Label();
            this.labelModel = new System.Windows.Forms.Label();
            this.labelCar = new System.Windows.Forms.Label();
            this.labelRating = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // labelName
            // 
            this.labelName.AutoSize = true;
            this.labelName.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.labelName.Location = new System.Drawing.Point(12, 11);
            this.labelName.Name = "labelName";
            this.labelName.Size = new System.Drawing.Size(71, 27);
            this.labelName.TabIndex = 0;
            this.labelName.Text = "David";
            // 
            // labelStatus
            // 
            this.labelStatus.AutoSize = true;
            this.labelStatus.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(224)))), ((int)(((byte)(224)))), ((int)(((byte)(224)))));
            this.labelStatus.Cursor = System.Windows.Forms.Cursors.Default;
            this.labelStatus.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.labelStatus.Location = new System.Drawing.Point(101, 11);
            this.labelStatus.Name = "labelStatus";
            this.labelStatus.Size = new System.Drawing.Size(110, 27);
            this.labelStatus.TabIndex = 1;
            this.labelStatus.Text = "Зайнятий";
            // 
            // labelModel
            // 
            this.labelModel.AutoSize = true;
            this.labelModel.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.labelModel.Location = new System.Drawing.Point(233, 11);
            this.labelModel.Name = "labelModel";
            this.labelModel.Size = new System.Drawing.Size(96, 27);
            this.labelModel.TabIndex = 2;
            this.labelModel.Text = "Модель";
            // 
            // labelCar
            // 
            this.labelCar.AutoSize = true;
            this.labelCar.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.labelCar.Location = new System.Drawing.Point(352, 11);
            this.labelCar.Name = "labelCar";
            this.labelCar.Size = new System.Drawing.Size(117, 27);
            this.labelCar.TabIndex = 3;
            this.labelCar.Text = "ВХ2134ВА";
            // 
            // labelRating
            // 
            this.labelRating.AutoSize = true;
            this.labelRating.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.labelRating.Location = new System.Drawing.Point(504, 11);
            this.labelRating.Name = "labelRating";
            this.labelRating.Size = new System.Drawing.Size(62, 27);
            this.labelRating.TabIndex = 4;
            this.labelRating.Text = "*****";
            // 
            // DriverCard
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.labelRating);
            this.Controls.Add(this.labelCar);
            this.Controls.Add(this.labelModel);
            this.Controls.Add(this.labelStatus);
            this.Controls.Add(this.labelName);
            this.Name = "DriverCard";
            this.Size = new System.Drawing.Size(575, 48);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelName;
        private System.Windows.Forms.Label labelStatus;
        private System.Windows.Forms.Label labelModel;
        private System.Windows.Forms.Label labelCar;
        private System.Windows.Forms.Label labelRating;
    }
}
