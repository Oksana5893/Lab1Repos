using System;
 
namespace Maths
{
    class Program
    {
        static void Main(string[] args)
        {
            double radius = 50;
	    double area = Math.PI * Math.Pow(radius, 2);
	    Console.WriteLine($"Площадь круга с радиусом {radius} равна {Math.Round(area,2)}"); 
        }
    }
}