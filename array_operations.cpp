#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
using namespace std;

const int N = 100;

// Function prototypes
void printArray(int A[], int TL);
void fillArrayRandomly(int A[]);
void sortArray(int A[], int TL);
void removeDuplicates(int A[], int &TL);

int main() {
    int array[N], TL = N;

    fillArrayRandomly(array);

    cout << "Original Array:" << endl;
    printArray(array, TL);

    sortArray(array, TL);
    removeDuplicates(array, TL);

    cout << "Processed Array:" << endl;
    printArray(array, TL);

    return 0;
}

// Function to sort the elements of an array in ascending order
void sortArray(int A[], int TL) {
    sort(A, A + TL);
}

// Function to remove duplicate elements in an array
void removeDuplicates(int A[], int &TL) {
    int i = 0;

    while (i < TL - 1) {
        int j = i + 1;

        if (A[i] == A[j]) {
            do {
                A[j] = A[j + 1];
                j++;
            } while (j < TL);

            TL--;
        } else {
            i++;
        }
    }
}

// Function to print the content of an array
void printArray(int A[], int TL) {
    for (int i = 0; i < TL; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Function to fill the array with random numbers between 21 and 79
void fillArrayRandomly(int A[]) {
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        A[i] = rand() % 58 + 21;
    }
}
