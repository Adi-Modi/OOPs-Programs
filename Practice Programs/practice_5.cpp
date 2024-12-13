#include <iostream>
using namespace std;

class Phone {
private:
    int areaCode;
    int exchange;
    int number;

public:
    Phone() : areaCode(0), exchange(0), number(0) {}

    void Input() {
        cout << "Enter your area code, exchange, and number: ";
        cin >> areaCode >> exchange >> number;
    }

    void Display() {
        cout << "My number is (" << areaCode << ") " << exchange << "-" << number << endl;
    }
};

int main() {
    Phone myNumber;
    Phone yourNumber;

    myNumber.Display();

    yourNumber.Input();

    cout << "Your number is ";
    yourNumber.Display();

    return 0;
}