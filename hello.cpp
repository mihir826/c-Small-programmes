#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter an integer: ";
    cin >> a ;
    cout << "Enter another integer: ";
    cin >> b ;
    int sum = a + b;
    int product = a * b ;
    int difference = a - b ;
    float Division = a / b ;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    cout << "Division: " << Division << endl;
    return 0;
}

