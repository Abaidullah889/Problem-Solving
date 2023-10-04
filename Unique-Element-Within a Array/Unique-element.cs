using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'lonelyinteger' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY a as parameter.
     */

    public static int lonelyinteger(List<int> a)
    {
        int count = 0;
        int res = 0;
        for (int i = 0; i < a.Count; i++)
        {
            count = 0;
            for (int j = 0; j < a.Count; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            if (count == 1)
            {
                res = a[i];
            }
        }

        return res;
    }

}

class Solution
{
    public static void Main(string[] args)
    {


        List<int> a = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(aTemp => Convert.ToInt32(aTemp)).ToList();

        int result = Result.lonelyinteger(a);
        Console.WriteLine($"The Unique Element is: {result}");
    }
}
