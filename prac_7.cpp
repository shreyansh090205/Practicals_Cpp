#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
    string subjects[3];
    int max_Marks[3];
    int min_Marks[3];
    int obtained_Marks[3];

public:
    Student(int rn, string nm)
    {
        rollNo = rn;
        name = nm;
    }
    void setData(string sub1, string sub2, string sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter max marks for sub" << i << ": " << endl;
            cin >> max_Marks[i];
            cout << "Enter min marks for sub" << i << ": " << endl;
            cin >> min_Marks[i];
            cout << "Enter obtained marks for sub" << i<< ": " << endl;
            cin >> obtained_Marks[i];
        }
    }
    void getData()
    {
        cout << "\nStudent Roll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "\nSubject: " << subjects[i] << endl;
            cout << "Maximum Marks " << max_Marks[i] << endl;
            cout << "Minimum Marks: " << min_Marks[i] << endl;
            cout << "Obtained Marks: " << obtained_Marks[i] << endl;
        }
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Student s1(100,"shazam");
    s1.setData("Hindi","English","Maths");
    s1.getData();
    return 0;
}