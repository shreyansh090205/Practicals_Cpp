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
    Student()
    {
        cout << "\nEnter your roll no.: ";
        cin >> rollNo;
        cout << "Enter your Name: ";
        cin >> name;
    }
    void setData(string sub1, string sub2, string sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
        cout << name << " Enter your data: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter max marks for " << subjects[i] << ": ";
            cin >> max_Marks[i];
            cout << "Enter min marks for " << subjects[i] << ": ";
            cin >> min_Marks[i];
            cout << "Enter obtained marks for " << subjects[i] << ": ";
            cin >> obtained_Marks[i];
            cout << endl
                 << endl;
        }
        cout << name << "'s Data successfully inputted." << endl;
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
    int getRollNo()
    {
        return rollNo;
    }

    ~Student()
    {
        // cout << "Destructor called" << endl;
    }
};
int main()
{
    int input;
    Student s[3];
    s[0].setData("Hindi", "Maths", "English");
    cout << "===============================================" << endl;
    s[1].setData("Hindi", "Maths", "English");
    cout << "===============================================" << endl;
    s[2].setData("Hindi", "Maths", "English");

    for (int i = 0; i < 3; i++)
    {
        s[i].getData();
        cout<<"================================================"<<endl;
    }
    

// get data by querying the rollno of the student
    int searchRollNo;
    cout << "\nEnter roll number of the student whose result you want to display: ";
    cin >> searchRollNo;

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (s[i].getRollNo() == searchRollNo)
        {
            s[i].getData();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nStudent with Roll Number " << searchRollNo << " not found.\n";
    }

    return 0;
}