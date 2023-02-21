#include <iostream>
using namespace std;

int main()
{
    int a = 100, b = 40, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    // without using temp variable
    // a = a + b;
    // b = a - b;
    // a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}