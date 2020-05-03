#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char letter = 'a';

    // Print the initial value of 'letter'
    cout << letter << endl;

    // Increment 'letter' by 1 and print the new value
    letter = letter + 1; // Alternatively: letter++; or letter += 1;
    cout << letter << endl;

    // Pause execution (platform-dependent)
    system("pause");

    // Loop until the ASCII value of 'letter' reaches 254
    while ((int)letter <= 254) {
        // Print the current character and its ASCII value
        cout << letter << endl;
        cout << (int)letter << endl;

        // Pause execution (platform-dependent)
        system("pause");

        // Increment 'letter' for the next iteration
        letter = letter + 1;
    }

    return 0;
}
