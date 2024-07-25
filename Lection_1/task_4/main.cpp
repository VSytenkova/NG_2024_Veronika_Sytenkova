#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int operation, firstNum, secondNum;
    float result = 1;
    cout << "Chose the number of function:\n1 - sum\n2 - difference\n3 - multiplication\n4 - division\n5 - square\n6 - root" << endl;
    cin >> operation;
    if (operation < 1 || operation > 6){
        cout << "False value";
        return 0;
    } else {
        cout << "Enter first number: ";
        cin >> firstNum;
        if (operation != 6){
            cout << "Enter second number: ";
            cin >> secondNum;
        }
    }

    switch (operation){
    case 1:
        result = firstNum + secondNum;
        break;
    case 2:
        result = firstNum - secondNum;
        break;
    case 3:
        result = firstNum * secondNum;
        break;
    case 4:
        result = firstNum / secondNum;
        break;
    case 5:
        result = pow(firstNum, secondNum);
        break;
    case 6:
        result = sqrt(firstNum);
        break;
    }

    cout << "Result = " << result << endl;
    return 0;
}
