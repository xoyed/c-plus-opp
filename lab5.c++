#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string make;
    string model;
    int year;

public:
    // Default constructor
    Vehicle()
    {
        make = "Unknown";
        model = "Unknown";
        year = 0;
    }

    // Parameterized constructor
    Vehicle(string mk, string mdl, int yr)
    {
        make = mk;
        model = mdl;
        year = yr;
    }

    // Copy constructor
    Vehicle(const Vehicle &v)
    {
        make = v.make;
        model = v.model;
        year = v.year;
    }

    // Destructor
    ~Vehicle()
    {
        cout << "Destructor called for " << make << " " << model << endl;
    }

    // Getter methods
    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }

    // Setter methods
    void setMake(string mk) { make = mk; }
    void setModel(string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }

    // Show info method
    void showInfo() const
    {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }

    // Method using this pointer
    void compareModel(const Vehicle &v)
    {
        if (this->model == v.model)
        {
            cout << "Both vehicles have the same model." << endl;
        }
        else
        {
            cout << "Models are different." << endl;
        }
    }

    // Overloaded service methods
    void service(int months)
    {
        cout << "Serviced after " << months << " months." << endl;
    }

    void service(string type)
    {
        cout << "Service type: " << type << endl;
    }
};

// Main function
int main()
{
    // Test the Vehicle class
    Vehicle v1;
    Vehicle v2("Toyota", "Corolla", 2020);
    Vehicle v3 = v2;

    v1.setMake("Honda");
    v1.setModel("Civic");
    v1.setYear(2022);

    v1.showInfo();
    v2.showInfo();
    v3.showInfo();

    v1.compareModel(v2);

    v2.service(5);
    v2.service("oil change");

    return 0;
}
