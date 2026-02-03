#include <iostream>
using namespace std;

int main() {
    int n;
    char choice;
    do {
        cout << "Enter an Integer Number:";
        cin >> n;
        if (n > 0) {
            cout << n << " Is Positive Number" << endl;
        } 
        else if (n < 0) {
           cout << n << " Is Negative Number" << endl;
        } 
        else {
           cout << n << " Is Zero" << endl;
        }
        cout << " you want to continue (y/n):";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Program Executed Successfully" << endl;
    return 0;
    }





