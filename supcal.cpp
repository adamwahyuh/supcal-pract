#include <iostream>
#include <cmath>
using namespace std;

void menu();
void calculator();
void moreCalculation();

int main(){
    menu();
    return 0;
}

void calculator(){
    float a, b, result;
    char oper, des;
    do{
        cout << "What Do You Want To Do? \n1.+\n2.-\n3./\n4.*\n5.Power\nType x to Exit\nAnswer : " << endl;
        if (des == 'x' || des == 'X'){
            break;
        }

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
    cout << "Welcome What Do You Want To Use?\n1.Calculator\n2.More Calculation\n3.Coming Soon\nAnswer: ";
    cin >> des;

    switch (des)
    {
    case '1':
    case 'a':
    case 'A':
        calculator();
        break;
    case '2':
    case 'b':
    case 'B':
        moreCalculation();
        break;
    default:
        cout << "None";
        menu();
        break;
    }
}

// TODO : 
// - Factorial -- Done
// - SQRT -- Done
// - Add exit midway program -- done
// - Recipies 
// - More if thought about something

int factorial(int a){
    if (a > 1){
        return a * factorial(a - 1);
    }
    else {
        return 1;
    }
}

void moreCalculation(){
    char des;
    int a, result;
    do
    {
        cout << "More Calculation\n1.Factorial\n2.SQRT\n3.Coming Soon\nType x to Exit\nAnswer : ";
        cin >> des;
        if (des == 'x' || des == 'X'){
            cout << "Program Exit" << endl;
            break;
        }

        cout << "Number : ";
        cin >> a;

        if (des == '1' || des == 'a'|| des == 'A'){
            result = factorial(a);
        }
        else if (des == '2' || des == 'b' || des == 'c'){
            result = sqrt(a);
        }
        
        else {
            cout << "None\nTry again!"<<endl;
            continue;
        }
        cout << "Result : " <<result <<"\nTry Again(Y/n)"<<endl;
        cin >> des;

        if (des == 'n' || des == 'N'){
            cout << "Thank You!"<< endl;
            break;
        }
    } while (true);
}