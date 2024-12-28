#include<iostream>
#include<math.h>
using namespace std;
class Circle
{
    protected:
        double radius;
    public:
        Circle(double r): radius(r){}
        double area()
        {
            return M_PI * radius * radius;
        }
};
class Sphere: public Circle
{
    public:
        Sphere(double r): Circle(r){}
        double volume()
        {
            return (4/3)*(M_PI * radius * radius * radius);
        }
};
class Cylinder: public Sphere
{
    double hieght;
    public:
        Cylinder(double r, double h):Sphere(r),hieght(h){}
        double volume()
        {
            return M_PI * radius * radius * hieght;
        }
};
int main()
{
    Circle c1(3);
    cout<<"The area of circle of radius 3m is "<<c1.area()<<"m^2"<<endl;

    Sphere s1(5);
    cout<<"The Volume of Sphere of radius 5m is "<<s1.volume()<<"m^3"<<endl;

    Cylinder cy1(2,4);
    cout<<"The Volume of cylinder of radius 2m and height 4m is "<<cy1.volume()<<"m^3"<<endl;
    return 0;
}