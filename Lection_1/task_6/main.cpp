#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size of pine: " << endl;
    cin >> size;

    int space = size;
    for(int j = 0; j < size; j++){
        int doubleStar = j * 2 - 1;
        for (int i = 0; i < space; i++)
            cout << " ";
        for (int i = 0; i < doubleStar; i++)
            cout << "*";
        space--;
        cout << endl;
    }

    for (int i = 1; i < size; i++)
        cout << " ";
    cout << "*" << endl;
    return 0;
}
