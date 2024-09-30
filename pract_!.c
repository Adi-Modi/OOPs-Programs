#include <stdio.h>
int main(){
    if((printf("Hello")==1)){
        printf("Hello");
    
    }
    else{
        printf(" World");
    }
    return 0;
}


// #include <iostream>
// #include <stdio.h>
// using namespace std;
// void fn(int a)
// {
//     switch (a)
//     {
//     case 0:
//         printf("%u",a);
//         break;
    
//     default:
//         printf("%u",a);
//         fn(a-1);
//     }
// }
// int main()
// {
//     fn(100);
// }