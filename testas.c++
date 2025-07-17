#include <iostream>
#include<string>
using namespace std;

class Student 
{

    private:
    string name;
    int rollNumber;
    float marks[5];
    float totalmarks;

    public:

    Student(string n,int r,float m[]){
        name=n;
        rollNumber=r;
        totatmarks=0;

    }
}
