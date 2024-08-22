#include <iostream>
#include <random>

using namespace std;

int main()
{
    int bank[10], account, choice, maxAccount, minAccount;
    int money = 0;
    bool enterAcc = false;
    bool exit = false;

    cout << "---Random bank accounts---" << endl;
    for (int acc = 0; acc < 10; acc++){
        bank[acc] = rand() % 1000000;
        cout << acc+1 << ": "<< bank[acc] << endl;
    }

    do {
        cout << "--------------------------" << endl;
        cout << "What do you want to do: " << endl;
        cout << " 1 - deposit money into a bank account." << endl;
        cout << " 2 - withdraw money from a bank account." << endl;
        cout << " 3 - withdraw the amount of money to all bank accounts." << endl;
        cout << " 4 - show max and min values." << endl;
        cout << " 5 - exit." << endl;
        cout << "--------------------------" << endl;
        cin >> choice;

        if (choice == 1 || choice ==2) {
            while (enterAcc == false) {
                cout << "Enter your account: ";
                cin >> account;
                if (account < 1 || account > 10)
                    cout << "Invalid value. Try again. ";
                else
                    enterAcc = true;
            }
        }


        switch (choice){
        case 1:
            enterAcc = false;
            do {
                cout << "How much money do you wanna deposit?: ";
                cin >> money;
                if (money > 0) {
                    bank[account-1] = bank[account-1] + money;
                    cout << "In account " << account << ": " << bank[account-1] << endl;
                    enterAcc = true;
                } else {
                    cout << "Invalid value. Try again. ";
                }
            } while (enterAcc == false);
            break;
        case 2:
            enterAcc = false;
            do {
                cout << "How much money do you wanna get?: ";
                cin >> money;
                if (money <= bank[account-1] && money > 0) {
                    bank[account-1] = bank[account-1] - money;
                    cout << "In account " << account << ": " << bank[account-1] << endl;
                    enterAcc = true;
                } else {
                    cout << "Invalid value. Try again. ";
                }
            } while (enterAcc == false);
            break;
        case 3:
            for (int acc = 0; acc < 10; acc++){
                money = money + bank[acc];
            }
            cout << "Amount of money: " << money << endl;
            break;
        case 4:
            maxAccount = 0;
            minAccount = 0;
            for (int acc = 1; acc < 10; acc++){
                if (bank[maxAccount] < bank[acc]) maxAccount = acc;
                if (bank[minAccount] > bank[acc]) minAccount = acc;
            }
            cout << "Maximum value in account " << maxAccount+1 << " : " << bank[maxAccount] << endl;
            cout << "Minimum value in account " << minAccount+1 << " : " << bank[minAccount] << endl;
            break;
        case 5:
            cout << "Good luck! :}" << endl;
            exit = true;
            break;
        default:
            cout << "Wrong choice";
            break;
        }
    } while (exit == false);
    return 0;
}
