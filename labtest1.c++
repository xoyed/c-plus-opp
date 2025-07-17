#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float marks[5];
    float totalMarks;

    void input()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks for 5 subjects:\n";
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            totalMarks += marks[i];
        }
    }

    void display()
    {
        cout << "\n--- Student Information ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << totalMarks << endl;
    }
};

int main()
{
    Student s;
    cin.ignore(); // To handle getline after cin
    s.input();
    s.display();

    return 0;
}
