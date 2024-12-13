#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1926) {
        cout << "Default Constructor Called" << endl;
    }

    void Print() {
        cout << day << "/" << month << "/" << year << endl;
    }

    void Input() {
        cout << "Enter day, month, and year: ";
        cin >> day >> month >> year;
    }

    void SetDay(int d) {
        day = d;
    }

    void SetMonth(int m) {
        month = m;
    }

    void SetYear(int y) {
        year = y;
    }

    int GetDay() {
        return day;
    }

    int GetMonth() {
        return month;
    }

    int GetYear() {
        return year;
    }
};

int main() {
    Date date1;
    date1.Print();

    date1.Input();
    date1.Print();

    Date xmasDay;
    xmasDay.Print();

    xmasDay.SetDay(25);
    xmasDay.SetMonth(12);
    xmasDay.SetYear(2020);

    cout << "Updated Christmas Day: ";
    xmasDay.Print();

    return 0;
}