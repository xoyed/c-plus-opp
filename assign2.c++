#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks[5];
    float totalMarks;

public:
    
    Student(string n, int r, float m[])
    {
        name = n;
        rollNumber = r;
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }

  
    void calculateTotalMarks()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
    }

  
    float getPercentage()
    {
        return (totalMarks / 500) * 100;
    }

    
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in 5 Subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << getPercentage() << "%" << endl;
        cout << "--------------------------" << endl;
    }
};

int main()
{
    
    float marks1[5] = {85, 90, 78, 88, 92};
    float marks2[5] = {75, 80, 70, 68, 82};
    float marks3[5] = {95, 98, 92, 88, 94};

    Student s1("Alice", 101, marks1);
    Student s2("Bob", 102, marks2);
    Student s3("Charlie", 103, marks3);

    
    s1.calculateTotalMarks();
    s2.calculateTotalMarks();
    s3.calculateTotalMarks();

    
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    return 0;
}
