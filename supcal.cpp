#include <iostream>
#include <cmath>
using namespace std;

// void menu();
void calculator();


int main(){
    calculator();
}

void calculator(){
    float a, b, result;
    char oper, des;
    do{
        cout << "What Do You Want To Do? \n1.+\n2.-\n3./\n4.*\n5.Power" << endl;
        cin >> oper;
        cout << "Enter First Number : " << endl;
        cin >> a;
        cout << "Enter Second Number : " << endl;
        cin >> b;

        if (oper == '1' || 'a' || 'A' || '+'){
            result = a + b;
        }
        else if (oper == '2' || 'b' || 'B' || '-'){
            result = a - b;
        }
        else if (oper == '3' || 'c' || 'C' || '/'){
            if (b == 0){
                cout << "Error";
            }
            else{
                result = a / b;
            }
        }
        else if (oper == '4' || 'd' || 'D' || '*'){
            result = a * b;
        }
        else if (oper == '5' || 'e' || 'E' || '^'){
            result = pow(a, b);
        }

        else{
            cout << "Not In Menu"<< endl;
        }

        cout<< "Result :" << result <<endl;

        cout << "Try Again? (y/n)";
        cin >> des;
        if (des == 'n' || "no"){
            break;
            cout << "Thank You!";
        }
    }while (true);
}