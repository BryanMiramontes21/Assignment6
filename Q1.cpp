#include <iostream>
using namespace std;

int main() {

    int n, i, sum = 0;

    cout << "Input an integer: ";
    cin >> n;

    if (n > 0) {
        for (i = 1; n > i; i++)
        {

            sum += i;
            cout << i << ", ";
        }
    }
    else
    {
        cout << "Place a positive integer" << endl;
    }


    cout << "\nthe sum of these numbers is: " << sum << endl;

    return 0;
}