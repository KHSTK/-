using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _06
{
    internal class Class1
    {
        static void Main(string[] args)
        {
            int n1 = 10;
            int n2 = 5;
            bool b1 = n1 > n2;
            bool b2 = n1 < n2;
            bool b3 = n1 >= n2;
            bool b4 = n1 <= n2;
            bool b5 = n1 == n2;
            bool b6 = n1 != n2;
            Console.WriteLine("{0},{1},{2},{3},{4},{5}.", b1, b2, b3, b4, b5, b6);
            bool a1 = true;
            bool a2 = !b1;       //!为逻辑相反的意思//
            Console.WriteLine("a1={0},a2={1}.", a1, a2);
            bool a3 = true;
            bool a4 = false;
            bool a5 = a3 && a4;//逻辑与，并且
            bool a6 = a3 || a4;//逻辑或//
            bool a7 = a3 ^ a4;  //异或，二者不同时为true
            Console.WriteLine("a3={0},a4={1},a5={2},a6={3},a7={4}", a3, a4, a5,a6,a7);







            Console.ReadKey();
        
        
        
        
        
        
        
        
        }
    }
}
