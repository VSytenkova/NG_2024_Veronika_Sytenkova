#include <iostream>
#include <random>

using namespace std;

int main()
{
    int bank[10], account, choice, maxAccount, minAccount;
    int money = 0;
    cout << "---Random bank accounts---" << endl;
    for (int i = 0; i < 10; i++){
        bank[i] = rand() % 1000000;
        cout << i+1 << ": "<< bank[i] << endl;
    }
    cout << "--------------------------" << endl;

    cout << "What do you want to do: " << endl;
    cout << " 1 - deposit money into a bank account." << endl;
    cout << " 2 - withdraw money from a bank account." << endl;
    cout << " 3 - withdraw the amount of money to all bank accounts." << endl;
    cout << " 4 - show max and min values." << endl;
    cout << "--------------------------" << endl;
    cin >> choice;

    if (choice == 1 || choice ==2){
        cout << "Enter your account: ";
        cin >> account;
    }

    switch (choice){
    case 1:
        cout << "How much money do you wanna deposit?: ";
        cin >> money;
        bank[account-1] = bank[account-1] + money;
        cout << "In account " << account << ": " << bank[account-1] << endl;
        break;
    case 2:
        cout << "How much money do you wanna get?: ";
        cin >> money;
        bank[account] = bank[account-1] - money;
        cout << "In account " << account << ": " << bank[account-1] << endl;
        break;
    case 3:
        for (int i = 0; i < 10; i++){
            money = money + bank[i];
        }
        cout << "Amount of money: " << money << endl;
        break;
    case 4:
        maxAccount = bank[0];
        minAccount = bank[0];
        for (int i = 1; i < 10; i++){
            if (maxAccount < bank[i]) maxAccount = bank[i];
            if (minAccount > bank[i]) minAccount = bank[i];
        }
        cout << "Maximum value: " << maxAccount << "\nMinimum value: " << minAccount << endl;
        break;
    default:
        cout << "Wrong choice";
        break;
    }
    return 0;
}
