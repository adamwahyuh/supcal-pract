#include <iostream>
using namespace std;

int factorial(int a);

int main (){
    int a = 19;
    cout << factorial(a);
    return 0;
}

int factorial(int a){
    if(a > 1){
        return a * factorial(a - 1);
    } 
    else{
        return 1;
    }
}