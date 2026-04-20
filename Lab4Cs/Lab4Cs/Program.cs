using System;

class Program
{
    static void Main()
    {
        Trapezoid t = new Trapezoid(0, 0, 3, 4, 5, 7, 4);

        Console.WriteLine("Площа: " + t.Area());
        Console.WriteLine("Периметр: " + t.Perimeter());
    }
}