#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int*b = &a;
    *b = 20;

    cout << "Value of a:" << a << endl;
    cout << "Address of a:" << &a << endl;
    cout << "Value of b (Address of a):" << b << endl;
    cout << "Value pointed to by b:" << *b << endl;
    return 0;

}


 








