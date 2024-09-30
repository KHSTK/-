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
            //int i = 0;
            //while (i <= 15)
            //{
            //    Console.WriteLine("五斗米");
            //    i++;//i+1
            //}
            ////2//
            //int a = 0, s = 0;
            //while(a<=100)
            //{
            //    s = s + a;
            //    a++;
            //}
            //Console.WriteLine("1到100的和为"+s);
            ////3//
            //int b = 1, d = 0;
            //while (b  <= 100)
            //{
            //    d = d + b;
            //    b=b+2;
            //}
            //Console.WriteLine("1到100的奇数和为" + d);
            //Console.WriteLine("请输入yes或no");
            //string e = Console.ReadLine();
            //while(e != "yes" && e != "no")
            //{
            //    Console.WriteLine("输入无效请重新输入");
            //    e = Console.ReadLine();
            //}
            // if(e=="yes"||e=="no")
            //    Console.WriteLine("输入完成");
            ////4//
            //Console.WriteLine("输入学生数量");
            //int num = Convert.ToInt32(Console.ReadLine());
            //double o = 1f, zong = 0;
            //while (o <= num)
            //{
            //    Console.WriteLine("输入第{0}位学生的成绩", o);
            //    double num1 = Convert.ToInt32(Console.ReadLine());
            //    o++;
            //    zong +=num1;
            //}
            //Console.WriteLine("总成绩为{0}，平均分为{1}",zong,(zong/num));


            string e;

            do
            {
                Console.WriteLine("请输入yes或no");
                e = Console.ReadLine();

            } while (e != "yes" && e != "no");


            if (e == "yes" || e == "no")
                Console.WriteLine("输入完成");

            Console.ReadKey();
        }
    }
}
