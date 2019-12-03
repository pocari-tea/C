using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Method03
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Plus(3, 4));
            Console.WriteLine(Plus(3.0, 4.0));
        }

        static int Plus(int a, int b)
        {
            Console.WriteLine("int Plus(int a, int b) 호출");
            return a + b;
        }
        
        static double Plus(double a, double b)
        {
            Console.WriteLine("double Plus(double a, double b) 호출");
            return a + b;
        }
    }
}
