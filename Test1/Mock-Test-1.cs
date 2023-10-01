using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{

    class res
    {

        public static int Median(List<int> arr)
        {

            arr.Sort();

            int size = arr.Count;
            if (size % 2 == 0)
            {

                int mid1 = arr[size / 2 + 1];
                int mid2 = arr[size / 2];
                return (mid1 + mid2) / 2;

            }
            else
            {

                return arr[size / 2];
            }

        }


    }










    internal class Mock_Test_1
    {
        static void Main()
        {
            List<int> arr = new List<int>();

            int size = Convert.ToInt32(Console.ReadLine());

            string s = Console.ReadLine();

            string[] fstring = (s.Split(" "));

            for (int i = 0; i < size; i++)
            {
                arr.Add(Convert.ToInt32(fstring[i]));
            }

            int me = res.Median(arr);
            Console.WriteLine(me);


        }
    }
}




