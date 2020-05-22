#include <iostream>

using namespace std;

int main() {
    int numeros[] = {5, 3, 4, 1, 2};
    int aux = 0, ban = 0;

    for (int i = 0; i < 5; i++) {
        ban = i;
        aux = numeros[i];

        while (ban > 0 && aux < numeros[ban - 1]) {
            numeros[ban] = numeros[ban - 1];
            ban--;
        }

        numeros[ban] = aux;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
