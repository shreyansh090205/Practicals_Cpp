#include<iostream>
using namespace std;
class Operation
{
private:
    /* data */
public:
    static void swap(int &x, int &y)
    {
        int temp = x;
        x= y;
        y =temp;
    }
    static void swap(float &x, float &y)
    {
        float temp = x;
        x= y;
        y =temp;
    }
};


int main()
{
    int a=10,b=30;
    float c=4.3,d=3.4;
    cout<<"Values before swap:\n a = "<<a<<"\t\tb = "<<b<<"\n c = "<<c<<"\t d = "<<d<<endl;
     Operation::swap(a,b);
     Operation::swap(c,d);
    cout<<"Values after swap:\n a = "<<a<<"\t\t b = "<<b<<"\n c = "<<c<<"\t d = "<<d<<endl;
    return 0;
}