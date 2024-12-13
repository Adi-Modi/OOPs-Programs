#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length, breadth;
    public:
        // Default constructor
        Rectangle() {
            length = 0;
            breadth = 0;
        }

        // Parameterized constructor
        Rectangle(double l, double b) {
            length = l;
            breadth = b;
        }
        
        double calculateArea() {
            return length * breadth;
        }
};

class Triangle {
    private:
        double side1, side2, side3;
    public:
        // Default constructor
        Triangle() {
            side1 = 0;
            side2 = 0;
            side3 = 0;
        }

        // Parameterized constructor
        Triangle(double a, double b, double c) {
            side1 = a;
            side2 = b;
            side3 = c;
        }
        
        double calculatePerimeter() {
            return side1 + side2 + side3;
        }
};

int main() {
    Rectangle rect(5.0, 4.0);
    cout << "Area of the Rectangle: " << rect.calculateArea() << endl;

    Triangle tri;
    cout << "Perimeter of the Triangle (default): " << tri.calculatePerimeter() << endl;

    Triangle triParam(3.0, 4.0, 5.0);
    cout << "Perimeter of the Triangle: " << triParam.calculatePerimeter() << endl;

    return 0;
}

