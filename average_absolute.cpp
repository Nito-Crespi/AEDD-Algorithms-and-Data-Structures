/* Enter 3 numbers and display the average and absolute values */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num1, num2, num3;

    /* Input of the data */
    cout << endl << "Enter number 1: ";
    cin >> num1;
    cout << endl << "Enter number 2: ";
    cin >> num2;
    cout << endl << "Enter number 3: ";
    cin >> num3;

    /* Display results */
    cout << endl << endl << "The average of the entered values is: "
         << setprecision(3) << setw(10) << ((float)(num1 + num2 + num3) / 3) << endl << endl;

    cout << endl << "The absolute values of the entered numbers are: " << endl;
    cout << endl << " The absolute value of number 1 is: " << (num1 >= 0 ? num1 : -num1);
    cout << endl << " The absolute value of number 2 is: " << (num2 >= 0 ? num2 : -num2);
    cout << endl << " The absolute value of number 3 is: " << (num3 >= 0 ? num3 : -num3);

    return 0;
}
