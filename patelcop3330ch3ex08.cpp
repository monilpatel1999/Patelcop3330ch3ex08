#include <iostream>

void keep_window_open();

using namespace std;

int main()
{
    cout << "Please enter an integer: \n";

    int value;
    int divisByTwo = 2;
    int equalToZero = 0;

    cin >> value;

    if (value % divisByTwo == equalToZero)
        cout << "The value " << value << " is an even number." << endl;
    else cout << "The value " << value << " is an odd number." << endl;

    keep_window_open();

    return 0;

}

void keep_window_open() {6

}
