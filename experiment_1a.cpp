// #include<iostream>
// using namespace std;

// class Shape{
//     private:
//        double height,length,radius,breadth;
//        int base;
//        double arearec,areatri,areacircle;
//     public:
//        void set_length(double l){
//         length=l;
//        }
//        void set_breadth(double b){
//         breadth=b;
//        }
       
//        void set_height(double h){
//         height=h;
//        }
//        void set_base(double a){
//         base=a;
//        }
//        void set_radius(double r){
//         radius=r;
//        }

//        double get_length(){
//         return length;
//        }
//        double get_breadth(){
//         return breadth;
//        }
//        double get_height(){
//         return height;
//        }
//        int get_base(){
//         return base;
//        }
//        double get_radius(){
//         return radius;
//        }

//        void area(double l,double b){
//         arearec= l*b;
//        }
//        void area(double r, long pi=3.14){
//         areacircle= pi*r*r;
//        }
//        void area(int a, double h){
//         areatri =0.5*a*h;
//        }

//        double get_area_rectangle(){
//         return arearec;
//        }
//        double get_area_circle(){
//         return areacircle;
//        }
//        double get_area_triangle(){
//         return areatri;
//        }
// };

// int main(){
//     Shape obj;
//     obj.set_base(2);
//     obj.set_height(2.5);
//     obj.set_length(1.5);
//     obj.set_breadth(2.0);
//     obj.set_radius(2.5);

//     double l = obj.get_length();
//     double b = obj.get_breadth();
//     obj.area(l,b);

//     double r=obj.get_radius();
//     obj.area(r);

//     int base=obj.get_base();
//     double h=obj.get_height();
//     obj.area(base,h);

//     cout<<"\nArea of Rectangle of OBJ1: "<<obj.get_area_rectangle();
//     cout<<"\nArea of circle of OBJ1: "<<obj.get_area_circle();
//     cout<<"\nArea of triangle of OBJ1: "<<obj.get_area_triangle();

//     return 0;

// }

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

