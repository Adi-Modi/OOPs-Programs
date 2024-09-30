#include <iostream>
using namespace std;
class LocalPhone{
private:
    string Phone;
public:
    LocalPhone(string n){
        Phone=n;
    }
    void setphone(string n){
        Phone=n;
    }
    void showphone(){
        cout<<this->Phone;
    }
};
class natphone:public LocalPhone{
private:
    int citycode;
public:
 natphone(int c,string n):LocalPhone(n){
        citycode=c;
    }
    void setcitycode(int c){
        citycode=c;
    }
    void showcitycode(){
        cout<<this->citycode;
        showphone();
    }
    void showcity(){
        cout<<this->citycode;
    }
};
class intphone:public natphone{
private:
    int countrycode;
public:
 intphone(int country,int c,string n):natphone(c,n){
        countrycode=country;
    }
    void setcountrycode(int c){
        countrycode=c;
    }
    void showcountrycode(){
        cout<<this->countrycode;
        showcitycode();
    }
    void showcountry(){
        cout<<this->countrycode;
    }
};
int main(){
    LocalPhone lp("1234567");
    natphone np(999,"1234567");
    intphone ip(42,999,"1234567");
    cout<<"Local Phone Number : ";
    lp.showphone();endl(cout);
    cout<<"City Code : ";
    np.showcity();endl(cout);
    cout<<"International Code : ";
    ip.showcountry();endl(cout);
    cout<<"Final result : ";
    ip.showcountrycode();

return 0;

}