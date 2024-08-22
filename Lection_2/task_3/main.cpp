#include <iostream>

using namespace std;

int main()
{
    int row[5];
    int maxValue = 0;

    for (int rowNow = 0; rowNow < 5; rowNow++) {
        cout << "Enter amount in " << rowNow+1 << " row: ";
        cin >> row[rowNow];
        if (maxValue < row[rowNow])
            maxValue = row[rowNow];
    }

    for(int rowNow = 0; rowNow < maxValue; rowNow++) {
        for (int y = 0; y < 5; y++) {
            if (row[y] > rowNow)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
