public class Trapezoid : Figure
{
    private double a, b, h;

    public Trapezoid() : base() { }

    public Trapezoid(double x1, double y1, double x2, double y2,
                     double a, double b, double h)
        : base(x1, y1, x2, y2)
    {
        this.a = a;
        this.b = b;
        this.h = h;
    }

    public double Area()
    {
        return (a + b) / 2 * h;
    }

    public double Perimeter()
    {
        return a + b + 2 * SideLength();
    }
}