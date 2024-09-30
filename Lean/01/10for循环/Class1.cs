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
        {//for循环：表达式1————表达式2————循环体——表达式3——表达式2——循环体...,for+tap*2快捷输入
            for (int i = 1; i <= 10; i++)  {
                Console.WriteLine("第{0}次循环",i);
            }
            int sum = 0;
            for (int i = 1; i <= 100; i++)
            {
                if(i%2!=0)
                    sum += i;
            }
            Console.WriteLine(sum);
           




            Console.ReadKey();
        
        
        
        
        
        
        
        
        }
    }
}
