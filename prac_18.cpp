#include <bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int rollNo;
    string subject[3];
    int marks[3];
    void setData()
    {
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter your rollNo.: ";
        cin >> rollNo;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter name of Subject " << (i + 1) << " : ";
            cin >> subject[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks of  " <<subject[i] << " : ";
            cin >> marks[i];
        }
    }
    void getData()
    {
        cout<<"\t\tStudent Details\n"<<endl;
        cout << "Student's Name: " << name << endl;
        cout << "Student's rollNo: " << rollNo << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks of " << name << " in " << subject[i] << " is " << marks[i] << endl;
        }
    }
};

int main()
{
    student s1;
    s1.setData();
    cout<<endl<<endl;
    s1.getData();
    return 0;
}