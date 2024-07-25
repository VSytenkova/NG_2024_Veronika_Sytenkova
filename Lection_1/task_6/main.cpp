#include <iostream>

using namespace std;

void drawPine(int size, int space){
    cout << endl;
    if (size > 1){
        drawPine(size-1, space+1);
    }
    int doubleStar = size * 2 - 1;
    for (int i = 0; i < space; i++)
        cout << " ";
    for (int i = 0; i < doubleStar; i++)
        cout << "*";
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of pine: " << endl;
    cin >> size;

    drawPine(size, 0);
    for (int i = 1; i < size; i++)
        cout << " ";
    cout << "*";
    return 0;
}
