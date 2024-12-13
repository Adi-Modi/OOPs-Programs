#include <iostream>
using namespace std;
class Person
{
private:
    const long long adharCard;
    const string panCard;
    string address;
    long long contactNo;

public:
    Person() : adharCard(0), panCard(NULL)
    {
    }
    Person(long long adhC, string panC, string address, long long contNo) : adharCard(adhC), panCard(panC)
    {
        this->address = address;
        this->contactNo = contNo;
    }
    long long getAdharCard() const
    {
        return adharCard;
    }
    string getPanCard() const
    {
        return panCard;
    }
    string add()
    {
        return address;
    }
    long long contNo()
    {
        return contactNo;
    }
    void changeAddress(string add)
    {
        address = add;
    }
    void changeContactNo(long long no)
    {
        contactNo = no;
    }
    void display()
    {
        cout << "Adhar No is : " << adharCard << endl;
        cout << "PAN No is : " << panCard << endl;
        cout << "Address of person is : " << address << endl;
        cout << "Mobile is : " << contactNo << endl;
        cout << endl;
    }
};
int main()
{
    Person p1(843678096345, "HFH2427DJHF", "23, Geejgarh Vihar, Hawa Sadak, Jaipur", 54763178954);
    p1.display();
    p1.changeAddress("9, Mansarovar, Jaipur");
    p1.changeContactNo(8976597452);
    p1.display();
    cout << "Aadhar No is : " << p1.getAdharCard() << endl;
    return 0;
}