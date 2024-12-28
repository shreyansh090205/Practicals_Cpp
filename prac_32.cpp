#include <iostream>
using namespace std;
void findBig(int *a, int *b, int *c)
{
    if (*a >= *b && *a >= *c)
    {
        if (*a == *b && *a == *c)
        {
            cout << "All are same" << endl;
        }
        else
        {
            cout << "a is the biggest" << endl;
        }
    }
    else if (*b >= *a && *b >= *c)
    {
        cout << "b is the biggest" << endl;
    }
    else
    {
        cout << "c is the biggest" << endl;
    }
}
int main()
{
    int x, y, z;
    cout << "Enter the numbers: " << endl;
    cin >> x >> y >> z;

    findBig(&x, &y, &z);
    return 0;
}