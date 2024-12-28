#include<iostream>
using namespace std;
void  swap_byValue(int x, int y)
{
    int temp = x;
    x= y;
    y= temp;
}
void  swap_byAddress(int* a, int* b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}
void  swap_byReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout<<"Before Swap by value x:"<<x<<" y: "<<y<<endl;
    swap_byValue(x,y);
    cout<<"After Swap by value  x:"<<x<<" y: "<<y<<endl;

    swap_byAddress(&x,&y);
    cout<<"After Swap by address  x:"<<x<<" y: "<<y<<endl;

    swap_byReference(x,y);
    cout<<"After Swap by reference  x:"<<x<<" y: "<<y<<endl;
    return 0;
}