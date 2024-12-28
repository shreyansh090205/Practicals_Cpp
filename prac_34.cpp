#include<iostream>
using namespace std;
class Employee
{
    private:
        string name;
        int emp_Id;
        float salary;
    public:
        void setter()
        {
            cout<<"Enter your name"<<endl;
            cin>>this->name;
            cout<<"Enter your Employee id"<<endl;
            cin>>this->emp_Id;
            cout<<"Enter your Salary"<<endl;
            cin>>this->salary;
        }
        void getter()
        {
            cout<<"Employee name: "<<this->name<<endl;
            cout<<"Employee ID: "<<this->emp_Id<<endl;
            cout<<"Employee salary: "<<this->salary<<endl;
        }

};
int main()
{
    Employee *ptr = new Employee[3];
    ptr->setter();
    (ptr+1)->setter();
    (ptr+2)->setter();
    
    ptr->getter();
    (ptr+1)->getter();
    (ptr+2)->getter();
    return 0;
}