#include <iostream>
using namespace std;
int add(int a ,  int b){
    return a + b;
}
int substract(int a , int b){
    return a - b;
}
int multiple(int a, int b){
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Division by zero not allowed\n";
        return 0;
    }
    return a / b;
}
int main() {
    int x , y, choice ;
    cout << "Enter Two Integers:";
    cin >> x >> y;
    cout << "\nChoose operation to perform:\n";
    cout << "1. Addition\n";
    cout << "2. Substraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Addition:" << add(x,y) << endl;
            break;
        case 2:
            cout << "Substraction:"<< substract(x,y)<< endl;
            break;
        case 3:
            cout << "Multiplication:" << multiple(x,y) << endl;
            break;
        case 4:
            cout << "Division:" << divide(x,y) << endl;
            break;
        default:
            cout << "Invalid choice\n";
    }
    cout << "\nThanks for using the calculator!\n" << endl;
    cout << "Programm Ended Successfully";
    return 0;
}








