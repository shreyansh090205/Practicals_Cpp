#include<iostream>
using namespace std;
class Shape
{
    protected:
        double x, y;
    public:
        Shape(double var1, double var2) : x(var1), y(var2) {}
        virtual void getData()=0;
        virtual void printArea()
        {
            cout << "Area calculation not defined for generic Shape." << endl;
        }
        virtual ~Shape() {}
};

class Triangle:public Shape
{
        public:
            Triangle(double base, double height):Shape(base,height){}
            void printArea() override
            {
                cout<<"Area of Triangle: "<<(0.5 * x * y)<<" m^2"<<endl;
            }
            void getData() override
            {
                cout<<"Radius: "<<x<<endl;
                cout<<"Height: "<<y<<endl;
            };
};
class Rectangle:public Shape
{
        public:
            Rectangle(double length, double breadth):Shape(length,breadth){}
            void printArea() override
            {
                cout<<"Area of Rectangle: "<<(x * y)<<" m^2"<<endl;
            }
            void getData() override
            {
                cout<<"length: "<<x<<endl;
                cout<<"breadth: "<<y<<endl;
            };
};

int main()
{
    Shape *ptr;
    Triangle t1(30,20);
    ptr = &t1;
    ptr->getData();
    ptr->printArea();

    Rectangle r1(12,12);
    ptr = &r1;
    ptr->getData();
    ptr->printArea();

    Triangle tNormal(3, 5);
    Rectangle rNormal(4, 6);
    cout << "\nNormal objects:" << endl;
    tNormal.printArea(); 
    rNormal.printArea(); 
    return 0;
}