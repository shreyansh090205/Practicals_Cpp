#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollNum;
        string name;
    public:
    Student(int r, string n) : rollNum(r), name(n) {}
    void displayStudentDetails() {
        cout << "Roll Number: " << rollNum << endl;
        cout << "Name: " << name << endl;
    }
};
class Exam
{
    protected:
        string subjects[3];
        int minMarks[3];
        int maxMarks[3];
        int obtainedMarks[3];
    public:
        Exam(string sub[], int min[], int max[], int obtained[]) {
        for (int i = 0; i < 3; i++) {
            subjects[i] = sub[i];
            minMarks[i] = min[i];
            maxMarks[i] = max[i];
            obtainedMarks[i] = obtained[i];
        }
    }
    void displayExamDetails() {
        cout << "Exam Details:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject: " << subjects[i]
                 << ", Min Marks: " << minMarks[i]
                 << ", Max Marks: " << maxMarks[i]
                 << ", Obtained Marks: " << obtainedMarks[i] << endl;
        }
    }
};
class Result: public Student, public Exam
{
    public:
        Result(int r, string n, string sub[], int min[], int max[], int obtained[])
        : Student(r, n), Exam(sub, min, max, obtained) {}
        void displayResult() {
        displayStudentDetails();
        displayExamDetails();

        int totalObtained = 0, totalMax = 0;
        for (int i = 0; i < 3; i++) {
            totalObtained += obtainedMarks[i];
            totalMax += maxMarks[i];
        }

        double percentage = (double)totalObtained / totalMax * 100;
        cout << "Total Marks Obtained: " << totalObtained << "/" << totalMax << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass\n";
        else
            cout << "Result: Fail\n";
    }
};
int main()
{
    string subjects[] = {"Math", "Physics", "Chemistry"};
    int minMarks[] = {30, 30, 30};
    int maxMarks[] = {100, 100, 100};
    int obtainedMarks[] = {85, 90, 78};
    Result studentResult(101, "Anshu", subjects, minMarks, maxMarks, obtainedMarks);
    cout << "\nFinal Result:\n";
    studentResult.displayResult();
    return 0;
}