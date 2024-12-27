#include <iostream>
#include <cstring>
using namespace std;
class String1
{
    char *str; // pointer to string
    int length;

public:
    String1(const char *input = "")
    {
        length = strlen(input);
        str = new char[length + 1];
        strcpy(str, input);
    }
    ~String1()
    {
        delete[] str;
    }
    String1 operator+(const String1 &other) const
    {
        int newLength = length + other.length;  // find new length for new collective object
        char *newStr = new char[newLength + 1]; // allocate memory to it
        strcpy(newStr, str);                    // copy left operand's str
        strcat(newStr, other.str);              // append right operand's str
        String1 temp(newStr);                   // create temporary String object to pass newStr to it's constructor
        delete[] newStr;                        // Deallocate the newStr's memory as constructor will give it another memory.
        return temp;
    }
    // d. overload (=): delete current object and assign new space to it then copy everything from other string object to it then return current object.
    String1 &operator=(const String1 &other)
    {
        if (this == &other)
            return *this;
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
        return *this;
    }
    // e. ==
    bool operator==(const String1 &other) const
    {
        return strcmp(str, other.str) == 0;
    }
    // f. <
    bool operator<(const String1 &other)
    {
        return strcmp(str, other.str)<0;
    }
    // g. >
        bool operator>(const String1 &other)
    {
        return strcmp(str, other.str)>0;
    }
    // h. !=
        bool operator!=(const String1 &other)
    {
        return strcmp(str, other.str) != 0;
    }
    // i. <=
    bool operator<=(const String1 &other)
    {
        return strcmp(str, other.str) <= 0;
    }
    // j. >=
    bool operator>=(const String1 &other)
    {
        return strcmp(str, other.str) >= 0;
    }


    // k.Overloaded >> operator for input 
    friend ostream &operator<<(ostream &os, const String1 &s)
    {
        os << s.str;
        return os;
    }
    friend istream &operator>>(istream &is, String1 &s)
    {
        char temp[1000]; // Temporary buffer for input
        is >> temp;
        s = String1(temp); // Assign to the current object
        return is;
    }
};
int main()
{
    String1 s1("Hello"), s2("World"), s3;
    s3 = s1;
    String1 s4 = s1 + s2;
    cout << "Concatenated string: " << s4 << endl;
    cout << s3 << endl;
    if (s1==s2)
    {
        cout<<"S1 is equal to S2"<<endl;
    }else{
        cout<<"S1 not equal to S2"<<endl;
    }
    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 != s2: " << (s1 != s2) << endl;
    cout << "s1 < s2: " << (s1 < s2) << endl;
    cout << "s1 > s2: " << (s1 > s2) << endl;
    cout << "s1 <= s2: " << (s1 <= s2) << endl;
    cout << "s1 >= s2: " << (s1 >= s2) << endl;

    // Testing input
    cout << "Enter a new string for s1: ";
    cin >> s1;
    cout << "Updated s1: " << s1 << endl;
    return 0;
}