#include<iostream>
#include <math.h>
using namespace std;
class Circle{
    int radius;
    public:
        Circle (double r):radius(r){}
        inline double area();
};
double Circle:: area()
{
    return M_PI * radius * radius;
}
int main()
{
    Circle c1(7);
    cout<<"Area of the circle is: "<<c1.area()<<endl;
    return 0;
}