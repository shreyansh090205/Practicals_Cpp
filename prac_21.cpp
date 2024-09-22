#include<iostream>
#include<math.h>
using namespace std;
class Calculate
{
private:
    /* data */
public:
    static int area(int length, int bredth)
    {
        return length * bredth;
    }
    static float area(float base, float height)
    {
        return 0.5*(base * height);
    }
    static float area(float radius)
    {
        return M_PI*(radius * radius);
    }
};

int main()
{
    
    cout<<"The area of triangle whose base is 2.23cm and height is 3.22cm: is :"<<Calculate::area(2.23f,3.22f)<<"cm sqare"<<endl;
    cout<<"The area of a rectangle of length 2cm and breadth 54cm is: "<<Calculate::area(2,54)<<"cm sqare"<<endl;
    cout<<"The area of circle whose radius is 2.23cm is : "<<Calculate::area(2.23f)<<"cm sqare"<<endl;
    return 0;
}