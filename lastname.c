using System;
 
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите свою фамилию:");
            string surname = Console.ReadLine();
            Console.WriteLine($"Студент по фамилии {surname}");   
        }
    }
}