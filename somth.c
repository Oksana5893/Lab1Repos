using System;
 
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите свое имя: ");
            string name = Console.ReadLine();
            Console.WriteLine($"Привет, {name}");
	    Console.WriteLine($"Какой сегодня хороший день!");    
        }
    }
}