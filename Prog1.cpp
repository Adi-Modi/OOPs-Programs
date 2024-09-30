#include<iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
void Counter(char array[]){
 int spaces=0;
 int uppercase=0;
 int lowercase=0;
 int vowels=0;
 int cosonant=0;
 int i=0;
    for(int i=0;i<strlen(array);i++){
		 if(array[i]==32){
		 spaces++;
		 }
        if(array[i]>='A' && array[i]<='Z'){
           uppercase++;
          // cout<<uppercase;
         }
        else if(array[i]>='a' && array[i]<='z'){
           lowercase++;
          //cout<<lowercase;
         }
 if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u'){
           vowels++;
          //cout<<vowels;
         }
       }
 cout<<"Total lettes are :"<<uppercase+lowercase<<endl;
 cout<<"Total spaces are :"<<spaces<<endl;
 cout<<"Upper case letters are :"<<uppercase<<endl;
 cout<<"Lowercase letters are :"<<lowercase<<endl;
 cout<<"Vowels are :"<<vowels<<endl;
 cout<<"Consonants are :"<<(uppercase+lowercase)-vowels<<endl;

}

int main(){
 char array[50];
 cout<<"enter array"<<endl;
 cin.getline(array,50);
    Counter(array);
 system("pause");
 return 0;
}