#include <iostream>

using namespace std;

int main()
{
    int money = 0;
    cout << "How much do you earn?: ";
    cin >> money;

    if (money < 1000){
        cout << endl << "Work harder, ";
    }
    if (money > 999){
        if (money > 999999){
            cout << endl << "Wow, you millionaire, ";
            goto Here;
        }
        cout << endl << "Good job, ";
    }
Here:
    cout << "but you are well done! :}";
    return 0;
}
