using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _07
{
    internal class Class1
    {static void Main(string[] args)
        {
            //1//
            Console.WriteLine("输入语文成绩");
            int C = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("输入数学成绩");
            int M = Convert.ToInt32(Console.ReadLine());
            bool a1 = C > 90 && M > 90;
            bool a2 = C > 90 || M > 90;
            Console.WriteLine("数学语文都大于90为{0}，数学语文有一门大于90为{1}", a1, a2);
            //2//
            Console.WriteLine("输入年份");
            int y = Convert.ToInt32(Console.ReadLine());
            bool b1 = y%400 == 0;
            bool b2 = y % 4 == 0 && 4 % 100!= 0;
            bool b3 = b1 || b2;
            Console.WriteLine("输入年份是闰年为{0}", b3);
            
            
            
            
            Console.ReadKey();
        
        
        
        
        
        }
    }
}
