#include<istream>
using namespace std;
#include<string>

class book{
    private:
string title;
string author;
float price;

public: 
int count;
 book(string t,string a,float p)
{
title=t;
author=a;
price=p;
count++;
}
friend void display();
friend class library;
};
class library{
public:
