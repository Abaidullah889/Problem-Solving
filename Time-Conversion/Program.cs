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
        public static string timeConversion(string s)
        {

        string APs = s.Substring(s.Length - 2);
        s = s.Remove(s.Length - 2);
        string []timeparts = s.Split(":");

            int hh, mm, ss;
            hh = Convert.ToInt32(timeparts[0]);
            mm = Convert.ToInt32(timeparts[1]);
            ss = Convert.ToInt32(timeparts[2]);


            if (APs == "PM" && hh != 12)
            {
                hh += 12;
            }
            else if (APs == "AM" && hh == 12)
            {
                hh = 0;
            }

            string res = $"{hh}:{mm}:{ss}";
            return res;


        }



    }


     class Program
    {
        static void Main(string[] args)
        {
          
        string s= Console.ReadLine();
        s=Result.timeConversion(s);
        Console.WriteLine(s);

        }
    }
