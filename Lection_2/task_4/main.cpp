#include <iostream>

using namespace std;

int main()
{
    string messege;
    int count = 0;
    cout << "Enter a string: ";
    getline (cin, messege);

    for (long long unsigned int i = 0; i < messege.length(); i++) {
        if (messege[i] == ' ') {
            count++;
        }
    }

    cout << "Words in that string: " << count << endl;

    return 0;
}
