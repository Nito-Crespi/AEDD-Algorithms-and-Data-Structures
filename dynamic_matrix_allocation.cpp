#include <iostream>
using namespace std;

int **ptr_matrix;
int num_rows, num_cols;

void requestInput();
void displayMatrix(int **ptr_matrix, int num_rows, int num_cols);

int main(int argc, char *argv[]) {
    requestInput();
    displayMatrix(ptr_matrix, num_rows, num_cols);

    for (int i = 0; i < num_rows; i++) {
        delete[] ptr_matrix[i];
    }
    delete[] ptr_matrix;

    return 0;
}

void requestInput() {
    cout << "Enter the number of rows:" << endl;
    cin >> num_rows;
    cout << "Enter the number of columns:" << endl;
    cin >> num_cols;

    ptr_matrix = new int *[num_rows];
    for (int i = 0; i < num_rows; i++) {
        ptr_matrix[i] = new int[num_cols];
    }

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            cin >> ptr_matrix[i][j];
        }
    }
}

void displayMatrix(int **ptr_matrix, int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            cout << "The element of the matrix [" << i << "][" << j << "] is: " << ptr_matrix[i][j] << endl;
        }
    }
}
