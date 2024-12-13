
#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string brand;
    string model;
    int year;
    double rentalPrice;
    double rentalCost;

public:
    Vehicle() {}

    Vehicle(string brand, string model, int year, double rentalPrice)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
    }
    void getRentalCost(int days)
    {
        rentalCost = days * rentalPrice;
        cout << "Rental cost of vehicle is :" << rentalCost << endl;
    }
};
class Car : public Vehicle
{
    int noOfDoors;

public:
    Car(string brand, string model, int year, double rentalPrice, int noOfDoors)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
        this->noOfDoors = noOfDoors;
    }
    void rentCost(int days)
    {
        if (days > 7)
        {
            rentalPrice = rentalPrice - (0.05 * rentalPrice);
            rentalCost = rentalPrice * days;
            cout << "RentalCost of car is :" << rentalPrice << endl;
        }
        else
        {
            rentalCost = rentalPrice * days;
            cout << "RentalCost of car is :" << rentalPrice << endl;
        }
    }
};
class Motorcycle : public Vehicle
{
    int engineDisplacement;

public:
    Motorcycle() {}
    Motorcycle(string brand, string model, int year, double rentalPrice, int engineDisplacement)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
        this->engineDisplacement = engineDisplacement;
    }
    void rentCost(int days)
    {
        if (days < 3)
        {
            rentalPrice = rentalPrice - (0.1 * rentalPrice);
            rentalCost = rentalPrice * days;
            cout << "RentalCost of motorcycle is :" << rentalCost << endl;
        }
        else
        {
            rentalCost = rentalPrice * days;
            cout << "RentalCost of motorcycle is :" << rentalCost << endl;
        }
    }
};
class Bicycle : public Motorcycle
{
    string wireFrameMaterial;

public:
    Bicycle() {}
    Bicycle(string brand, string model, int year, double rentalPrice, string wireFrameMaterial)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->rentalPrice = rentalPrice;
        this->wireFrameMaterial = wireFrameMaterial;
    }
    void rentCost(int days)
    {
        rentalCost = 200 * days;

        cout << "RentalCost of motorcycle is :" << rentalCost << endl;
    }
};
int main()
{
    Vehicle v1("Bugatti", "Chiron", 2018, 30000);
    v1.getRentalCost(10);
    Car c1("Maruti", "Swift", 2019, 3000, 4);
    c1.getRentalCost(9);
    Motorcycle m1("Honda", "Shine", 2024, 200, 125);
    m1.getRentalCost(2);
    Bicycle b1("Atlas", "Race", 2019, 100, "Steel");
    b1.getRentalCost(4);
    return 0;
}