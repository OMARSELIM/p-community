using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {

            //P Community
            Console.WriteLine("a) google");
            Console.WriteLine("B) Microsoft");
            Console.WriteLine("C) Exit");
            string x;
            x = Console.ReadLine();


            string[] A = new string[] { "ahmed", "mohamed", "hassan" };

            string[] B = new string[] { "mai", "reham", "fatma" };
            do
            {
                if (x == "a" || x == "A")
                {

                    for (int i = 0; i < A.Length; i++)
                    {
                        Console.WriteLine(A[i]);
                    }

                }
                else if (x == "b" || x == "B")
                {
                    for (int i = 0; i < B.Length; i++)
                    {
                        Console.WriteLine(B[i]);
                    }
                }

                else if (x == "c" || x == "C")
                {
                    System.Environment.Exit(0);

                }

                x = Console.ReadLine();
            }
            while (x != "c");
        }
    }

}
