// Circumference and area of a circle with radius 2.5

#include <iostream>
using namespace std;

const double pi = 3.14159;

int main()
{
    cout << "Enter radius of a circle:" << endl;
    double radius;
    cin >> radius;
    
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    cout << "Circumference Of a Circle:" << circumference << endl;
    cout << "Area of a Circle:" << area << endl;
    return 0;
}





