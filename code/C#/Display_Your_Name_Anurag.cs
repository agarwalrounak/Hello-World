using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Details_Form
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("What is Your Name?");
            Console.Write("Enter Your First Name : ");
            string myFirstName;
            myFirstName = Console.ReadLine();

            Console.Write("Enter Your Last Name : ");
            string myLastName;
            myLastName = Console.ReadLine();

            Console.WriteLine("Hello, " + myFirstName + " " + myLastName);

            Console.WriteLine("What is Your age?");
            Console.Write("Enter your Age : ");
            string myAge;
            myAge = Console.ReadLine();

            Console.WriteLine("Hi, " + myFirstName + " " + myLastName + " You are " + myAge + " Years Old.");
            Console.ReadLine();
        }
    }
}
