using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _08
{
    internal class Class1
    {
        static void Main(string[] agrs)
        {
            //1//
            //Console.WriteLine("输入年龄");
            //int ages = Convert.ToInt32(Console.ReadLine());
            //if (ages >= 23)
            //    Console.WriteLine("能结婚了");
            //else Console.WriteLine("不能结婚");
            ////2//
            //Console.WriteLine("用户名");
            //string name = Console.ReadLine();
            //Console.WriteLine("密码");
            //string mima = Console.ReadLine();
            //if (name == "wdm" && mima == "111")
            //    Console.WriteLine("登录成功");
            //else Console.WriteLine("密码或账号输入错误");
            //double total = 100;
            //Console.WriteLine("输入信用分");
            //int score = Convert.ToInt32(Console.ReadLine());
            //if (score >= 700)
            //{
            //    total *= 0.8;
            //    Console.WriteLine("总价是" + total);
            //}
            //else
            //{
            //    total *= 0.9;
            //    Console.WriteLine("总价是" + total);
            //}
            //Console.WriteLine("输入数字a");
            //int a = Convert.ToInt32(Console.ReadLine());
            //Console.WriteLine("输入数字b");
            //int b = Convert.ToInt32(Console.ReadLine());
            //if (a % b == 0 || a + b >= 100)
            //{
            //    Console.WriteLine("得到数字{0}",a);
            //}
            //else Console.WriteLine("得到数字" + b);
            //三元运算
            //bool result = 5 > 3 ? true : false;
            //Console.WriteLine(result);
            //double total = 100;
            //Console.WriteLine("输入信用分");
            //int score = Convert.ToInt32(Console.ReadLine());
            //total = score > 700 ? total * 0.8 : total * 0.9;
            //Console.WriteLine("总价是" + total);
            //if---else-if/
            //Console.WriteLine("输入成绩");
            ////int scort = Convert.ToInt32(Console.ReadLine());
            //if (scort > 90)
            //    Console.WriteLine("A");
            //else if (scort > 80)
            //    Console.WriteLine("B");
            //else if (scort > 70)
            //    Console.WriteLine("C");
            //else if (scort > 60)
            //    Console.WriteLine("D");
            //else Console.WriteLine("E");
            Console.WriteLine("输入账户");
            string name = Console.ReadLine();
            Console.WriteLine("输入密码");
            string mima = Console.ReadLine();
            if (name == "wdm" && mima == "111")
                Console.WriteLine("登录成功");
            else if (name == "admin" || mima != "111")
                Console.WriteLine("密码错误");
            else Console.WriteLine("用户不存在");
            //int salary = 5000;
            //Console.WriteLine("请输入评级");
            //string level = Console.ReadLine();
            //bool OK = true;
            //switch (level)
            //{
            //    case "A":
            //        salary += 500;
            //        break;
            //    case "B":
            //        salary += 200;
            //        break;
            //    case "C":
            //        break;
            //    case "D":
            //        salary -= 200;
            //        break;
            //    case "E":
            //        salary -= 500;
            //        break;
            //    default:
            //        OK = false;
            //        Console.WriteLine("输入评级有误");
            //        break;
            //}
            //if(OK)
            //    Console.WriteLine("工资为" + salary);

            Random random = new Random(); //创建随机数的对象
            random.Next(1, 10);//为随机数分配1-10的值，不包含10
            int ran = random.Next(1, 7);
            switch (ran)
            {
                case 1:
                    Console.WriteLine("程序");
                    break;
                case 2:
                    Console.WriteLine("美术");
                    break;
                        case 3:
                    Console.WriteLine("策划");
                    break;
                case 4:
                    Console.WriteLine("项目");
                    break;
                case 5:
                    Console.WriteLine("测试");
                    break;
                case 6:
                    Console.WriteLine("运营");
                    break;
            }


            for (int i = 100; i < 1000; i++)
            {
                int g = i % 10;
                int s = (i % 100) / 10;
                int b = i / 100;
                if ((b * b * b) + (s * s * s) + (g * g * g) == i)
                {
                    Console.WriteLine("水仙数" + i);
                }
                i++;


            }



            Console.ReadKey();










        }
    }
}
