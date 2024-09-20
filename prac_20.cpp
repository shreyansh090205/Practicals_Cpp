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

Polar::Polar(float radius= 2, float angles = 20)
{
    this->radius = radius;
    this->angle = angles;
    cout << "\nObject intialized via Parameterized Constructor" << endl;
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
    Polar p0;
    cout<<"p0 Details:"<<endl;
    p0.display();

    Polar p1(3.5,40);
    cout<<"p1 Details:"<<endl;
    p1.display();

    Polar p2(p1);
    cout<<"p2 Details:"<<endl;
    p2.display();
    return 0;
}