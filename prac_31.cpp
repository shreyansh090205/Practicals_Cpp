#include<iostream>
using namespace std;

int main()
{
    int x =10;
    float f = 10.233;
    void *ptr;
    ptr =&x;
    cout<<"Value of x: "<<*(static_cast<int*>(ptr))<<endl;
    ptr = &f;
    cout<<"Value of f: "<<*(static_cast<float*>(ptr))<<endl;
    return 0;
}