#include <iostream>
#include <cmath>
using namespace std;

void menu();
void calculator();


int main(){
    menu();
    return 0;
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

        if (oper == '1' || oper=='a' || oper=='A' || oper=='+'){
            result = a + b;
        }
        else if (oper == '2' || oper=='b' || oper=='B' || oper=='-'){
            result = a - b;
        }
        else if (oper == '3' || oper=='c' || oper=='C' || oper=='/'){
            if (b == 0){
                cout << "Error";
            }
            else{
                result = a / b;
            }
        }
        else if (oper == '4' || oper=='d' || oper=='D' || oper=='*'){
            result = a * b;
        }
        else if (oper == '5' || oper=='e' || oper=='E' || oper=='^'){
            result = pow(a, b);
        }

        else{
            cout << "Not In Menu"<< endl;
            continue;
        }

        cout<< "Result :" << result <<endl;

        cout << "Try Again? (y/n) \nAnswer: ";
        cin >> des;
        if (des == 'n' || des == 'N'){
            cout << "Thank You!";
            break;
        }
    }while (true);
}

void menu (){
    // Menu 
    char des;
    cout << "Welcome What Do You Want To Use?\n1.Calculator\n2.Coming Soon\n3.Coming Soon\nAnswer: ";
    cin >> des;
    switch (des)
    {
    case '1':
    case 'a':
    case 'A':
        calculator();
    case '2':
    case 'b':
    case 'B':
        // New Feature 
        break;
    default:
        cout << "None";
        menu();
    }
}