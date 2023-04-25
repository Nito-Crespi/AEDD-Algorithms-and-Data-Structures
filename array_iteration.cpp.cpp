#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr_numbers = numbers;

    for (int i = 0; i < 5; i++) {
        cout << "The number at position " << i << " is " << *ptr_numbers++ << endl;
    }

    return 0;
}
