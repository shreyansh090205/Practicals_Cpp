#include<iostream>
using namespace std;
class Polar
{
private:
    float radius;
    float angle;
public:
    Polar(float radius, float angles);
    Polar(const Polar &obj);
    void display() const {
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << endl;
    }
    ~Polar();
};

Polar::Polar(float radius, float angles)
{
    this->radius = radius;//The this pointer is a pointer to the current object, and pointers require the use of the -> operator to access members.
    this->angle = angles;
    cout << "Object intialized via Parameterized Constructor" << endl;
}
Polar::Polar(const Polar &obj)
{
    // Shallow Copy
    this->radius = obj.radius;
    this->angle = obj.angle;
    cout<<"\nObject intialized via copy construtor"<<endl;
}

Polar::~Polar()
{
}

int main()
{
    Polar p1(3.5,40);
    cout<<"p1 Details:"<<endl;
    p1.display();

    Polar p2(p1);
    cout<<"p2 Details:"<<endl;
    p2.display();
    return 0;
}