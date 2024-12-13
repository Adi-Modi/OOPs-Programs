#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNumber;
    float marks;

public:
    Student() {
        name = " ";
        rollNumber = 0;
        marks = 0.0;
    }

    Student(string name, int rollNumber, float marks) {
        this->name=name;
        this->rollNumber=rollNumber;
        this->marks=marks;
    }

    Student(Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;
        marks = s.marks;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main() {

    // Student s1;
    // cout << "Student 1 (Default Constructor):" << endl;
    // s1.display();

    // Student s2("Ab", 1, 1.2);
    // cout << "Student 2 (Parameterized Constructor):" << endl;
    // s2.display();

    // // Copy construction
    // Student s3(s2); // Using copy constructor
    // cout << "Student 3 (Copied from Student 2):" << endl;
    // s3.display();


    Student s1;
    cout << "Student 1 (Default Constructor):" << endl;
    s1.display();

    Student s2("Ab",1,1.2);
    cout << "Student 2 (Parameterized Constructor):" << endl;
    s2.display();
    
    Student s3=s2;
    cout << "Student 3 (Copy Constructor):" << endl;
    s3.display();

    // Student student2("Akash Mahawar", 101, 92.5);
    // cout << "Student 2 (Parameterized Constructor):" << endl;
    // student2.display();

    // Student student3(student2);
    // cout << "Student 3 (Copy Constructor):" << endl;
    // student3.display();

    return 0;
}

    

    

    
