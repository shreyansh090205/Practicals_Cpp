#include<iostream>
using namespace std;
class Simple
{
public:
    static int fact(int n)
    {
        if (n<=1)
        {
            return 1;
        }
        else
        {
        return n*fact(n-1);
        }
    }

    static bool isPrime(int n)
    {
        if (n <= 1) {
            return false; // 0 and 1 are not prime numbers
        }
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i == 0)
            {
                return false;//number is not prime(divisible by i)
            }
        }
        return true;//number is prime
    }

    static void printFib(int n)
    {
        int t1=0,t2=1,nextTerm;
        cout<<"Fibonacci Series: "<<t1<<", "<<t2;
        for (int i = 1; i < n - 1; i++)
        {
            nextTerm = t1+t2;
            cout<<", "<<nextTerm;
            t1=t2;
            t2 = nextTerm;
        }
        cout<<endl;
    }
};
int main()
{
   int val= Simple::fact(34);
    
    
    cout<<val<<endl;
    if (Simple::isPrime(67))
    {
        cout<<"67 is prime number."<<endl;
    }
    else
    {
        cout<<"67 is not prime"<<endl;
    }
    Simple::printFib(5);// will throw an error if printFib() function is not static
    return 0;
}