#include <iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int employee_id;
    double salary;

public:
    Employee()
    {
        name = "NULL";
        employee_id = 0;
        salary = 0;
    }
    Employee(string name, int employee_id, double salary)
    {
        this->name = name;
        this->employee_id = employee_id;
        this->salary = salary;
        cout << salary << endl;
    }
    void monthlyBonus()
    {
        cout << "Salary of Employee " << salary << endl;
    }
};

class Professor : public Employee
{
    string department;

public:
    Professor()
    {
        name = "NULL";
        employee_id = 0;
        salary = 0;
        department = "NULL";
    } // default const

    Professor(string name, int employee_id, double salary, string department)
    {
        this->name = name;
        this->employee_id = employee_id;
        this->salary = salary;
        this->department = department;
    }
    // member function
    void monthlyBonus()
    {
        salary = salary + (0.10 * salary);
        cout << "10% Monthly Bonuus of Professor " << salary << endl;
    }
};

class AdminStaff : public Employee
{
    string position;

public:
    AdminStaff() {} // default const

    AdminStaff(string name, int employee_id, double salary, string position)
    {
        this->name = name;
        this->employee_id = employee_id;
        this->salary = salary;
        this->position = position;
    }
    // member function
    int monthlyBonus()
    {
        salary = salary + (0.05 * salary);
        cout << "Admin Staff Monthyly Bonus " << salary << endl;
    }
};

class Janitor : public Employee
{
    int hour_worked;

public:
    Janitor() {} // default const

    Janitor(string name, int employee_id, double salary, int hour_worked)
    {
        this->name = name;
        this->employee_id = employee_id;
        this->salary = salary;
        this->hour_worked = hour_worked;
    }

    // member function
    int hourlyWages()
    {
        int salary = hour_worked * 500;
        cout << "Janitor's salary is " << salary << endl;
        return salary;
    }
};

int main()
{
    Employee O1("Aditya", 102, 30000);
    O1.monthlyBonus();
    Professor P1("Raj", 103, 150000, "Computer Engineering");
    P1.monthlyBonus();   // it will not call base class 

    AdminStaff A1("Ayush", 104, 150000, "Data Analyst");
    A1.monthlyBonus();
    Janitor J1("Harsh", 105, 120000, 8);
    J1.hourlyWages();
    return 0;
}