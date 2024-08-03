#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float numberA, numberB, numberC, discriminant, rootFirst, rootSecond;
    cout << "Enter a: " << endl;
    cin >> numberA;
    cout << "Enter b: " << endl;
    cin >> numberB;
    cout << "Enter c: " << endl;
    cin >> numberC;

    discriminant = (numberB * numberB - (4 * numberA * numberC));
    if (discriminant < 0){
        rootFirst = (- numberB ) / (2 * numberA);
        rootSecond = (sqrt(-discriminant)) / (2 * numberA);
        cout << "Result:\nx1 = " << rootFirst << " + " << rootSecond << "i\nx2 = " << rootFirst << " - " << rootSecond << "i";
        return 0;
    } else {
        rootFirst = (- numberB - sqrt(discriminant)) / (2 * numberA);
        rootSecond = (- numberB + sqrt(discriminant)) / (2 * numberA);
    }

    if (rootFirst == rootSecond){
        cout << "Result: " << rootFirst;
    } else {
        cout << "Result:\nx1 = " << rootFirst << "\nx2 = " << rootSecond;
    }
    return 0;
}
