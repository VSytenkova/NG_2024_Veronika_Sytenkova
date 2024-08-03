#include <iostream>

using namespace std;

int main()
{
    int value = 1;
    int stars[256];
    int count = 0;
    int maxValue = 0;

    do {
        cout << "Enter value: ";
        cin >> value;
        if (value < 21 && value > 0){
            stars[count] = value;
            if (maxValue < value)
                maxValue = value;
            count++;
        } else if (value != 0){
            cout << "Invalid value. Try again.";
        }
    } while (value != 0);

    if ((maxValue % 2) == 0){
        for (int i = 0; i < count; i++){
            for (int y = 0; y < (maxValue-((stars[i]/2)*2+1)/2); y++){
                cout << " ";
            }
            for (int y = 0; y < (stars[i]/2)*2; y++){
                cout << "*";
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < count; i++){
            for (int y = 0; y < (maxValue-stars[i])/2; y++){
                cout << " ";
            }
            for (int y = 0; y < (stars[i]/2)*2+1; y++){
                cout << "*";
            }
            cout << endl;
        }
    }
}
