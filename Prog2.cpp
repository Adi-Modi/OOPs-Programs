#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float eng, math, science;
    float total;

public:
    void TakeData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in English: ";
        cin >> eng;
        cout << "Enter marks in Math: ";
        cin >> math;
        cout << "Enter marks in Science: ";
        cin >> science;
        total = cTotal();
    }

    void ShowData() {
        cout << "Name: " << name << endl;
        cout << "English: " << eng << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "Total: " << total << endl;
    }

    float cTotal() {
        return eng + math + science;
    }
};

int main() {
    Student s1, s2;
    s1.TakeData();
    s2.TakeData();
    cout << "\nStudent 1 Data:\n";
    s1.ShowData();
    cout << "\nStudent 2 Data:\n";
    s2.ShowData();

    return 0;
}