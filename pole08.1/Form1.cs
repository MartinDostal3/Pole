using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace pole08._1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int[] poleA;
        int[] poleB;
        int[] poleC;

        public static void Vygenruj(int[] pole, int a, int b)
        {
            Random rnd = new Random();
            for(int i = 0; i < pole.Length; i++)
            {
                pole[i] = rnd.Next(a, b + 1);
            }
        }
        public static void Zobraz(int[] pole, ListBox listBox)
        {
            listBox.Items.Clear();
            foreach(int x in pole)
            {
                listBox.Items.Add(x);
            }


        }
        public static void Prunik(int[] poleA, int[] poleB, int[] poleC, ListBox listBox)
        {
            listBox.Items.Clear();
            int x = poleA.Length + poleB.Length;
            poleC = new int[x];
            poleC = poleA.Intersect(poleB).ToArray();
            listBox.Items.Clear();
            for (int i = 0; i < poleC.Length; i++)
            {
                int a = poleC[i];
                listBox.Items.Add(a);

            }
        }




        private void button1_Click(object sender, EventArgs e)
        {
            int n  = int.Parse(textBox1.Text);
            poleA = new int[n];
            Vygenruj(poleA, 3, 10);
            Zobraz(poleA, listBox1);


        }

        private void button2_Click(object sender, EventArgs e)
        {
            int m = int.Parse(textBox2.Text);
            poleB = new int[m];
            Vygenruj(poleB, 5, 12);
            Zobraz(poleB, listBox2);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Prunik(poleA, poleB, poleC, listBox3);
        }
    }
}
