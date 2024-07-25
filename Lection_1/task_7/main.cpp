#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int radius, numberX, numberY;
    float danger, level;
    cout << "This is detector \"Response\"." << endl;
    cout << "Enter radius of the field: ";
    cin >> radius;
    cout << "Enter your coordinates by x: ";
    cin >> numberX;
    cout << "Enter your coordinates by y: ";
    cin >> numberY;

    danger = sqrt(pow(numberX, 2) + pow(numberY, 2));
    level = danger / radius * 100;
    cout << "Distance to the center of the field: " << danger << endl;
    cout << "You're " << level << "% in the field";
    return 0;
}
