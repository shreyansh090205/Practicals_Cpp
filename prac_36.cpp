#include<iostream>
using namespace std;
inline int findMin(int x, int y)
{
    return (x<y)? x: y;
}
int main()
{
    int result = findMin(10,1);
    cout<<"Minimum Value: "<<result<<endl;
    return 0;
}