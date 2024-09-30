#include <iostream>
using namespace std;
class Tyre{
private:
	int* width;
	int* aspect_ratio;
	int* diameter;
public:
	Tyre();
	Tyre(int,int,int);
	~Tyre();
	int getwidth();
	int getaspect_ratio();
	int getdiameter();
//Constructors, Getters and Destructor
void PrintTyre(){
	cout<<"WIDTH : "<<*width<<"     ASPECT_RATIO : "<<*aspect_ratio<<"     DIAMETER : "<<*diameter;
}
};
  Tyre::Tyre(){
  	width=0;
  	aspect_ratio=0;
  	diameter=0;
  }
  Tyre::Tyre(int W,int A,int D){
		this->width=new int;
        this->aspect_ratio=new int;
        this->diameter=new int;
       *width=W;
       *aspect_ratio=A;
       *diameter=D;
   }
   int Tyre::getwidth(){
		return *width;
	}

	int Tyre::getaspect_ratio(){
		return *aspect_ratio;
	}

	int Tyre::getdiameter(){
		return *diameter;
	}
	Tyre::~Tyre(){
        delete width,aspect_ratio,diameter;
	}


class Car{
private:
	int* model;
	string* company;
	Tyre* t1;
public:
//	Car();
	Car(int M,string C,Tyre& T){
		this->model=new int;
        this->company=new string;
        *model=M;
        *company=C;
        t1=new Tyre(T.getwidth(), T.getaspect_ratio(), T.getdiameter());
	}
	~Car(){
		delete model,company,t1;
	}
//Constructors, Destructor
void PrintCar(){
	cout<<"MODEL : "<<*model<<"     COMPANY : "<<*company<<"     ";
	t1->PrintTyre();

}
};


int main(){
	Tyre tNew(12, 10, 13);
	tNew.PrintTyre();endl(cout);
	Car cNew(2016,"Honda",tNew);
	cNew.PrintCar();
	return 0;
}