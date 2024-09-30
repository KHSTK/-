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
            int i = 0;
            while (true)
            {
                Console.WriteLine("循环第{0}次", i);
                i++;
                if (i > 10)
                {
                    break;   //break跳出循环,一般搭配if

                }





            }
            for (int j = 0; j < 10; j++)
            {
                Console.WriteLine("j="+j);
                for (int h = 0; h < 10; h++)
                {
                    Console.WriteLine("h="+h);

                }

            }

            Console.WriteLine("输入数字");
            while (true)
            {
                int num = Convert.ToInt32(Console.ReadLine());
                if (num == 0) {
                    break;
                }
                else Console.WriteLine(num*num);

            }

            Console.ReadKey();
        
        
        
        
        
        }
    }
}
