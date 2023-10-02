using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Conditional_Statement
    {
        public static int Main(string[] args)
        {

            int i = 0;
            i=Convert.ToInt32(Console.ReadLine());

            if (i % 2 != 0)
            {
                Console.WriteLine("Weird");
            }
            else if (i % 2 == 0 && i >= 2 && i <= 5)
            {
                Console.WriteLine("Not Weird");
            }
            else if (i % 2 == 0 && i >= 6 && i <= 20)
            {
                Console.WriteLine("Weird");
            }
            else if (i % 2 == 0 && i > 20)
            {
                Console.WriteLine("Not Weird");
            }

            return 0;
        }
    }
}
