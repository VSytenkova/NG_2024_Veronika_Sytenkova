#include <iostream>

using namespace std;

int main()
{
    int row[5];
    int maxValue = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter amount in " << i+1 << " row: ";
        cin >> row[i];
        if (maxValue < row[i])
            maxValue = row[i];
    }

    for(int i = 0; i < maxValue; i++) {
        for (int y = 0; y < 5; y++) {
            if (row[y] > i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
