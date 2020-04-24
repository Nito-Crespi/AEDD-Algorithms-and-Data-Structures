#include <iostream>
using namespace std;

int **ptr_matrix1, **ptr_matrix2, n_rows, n_cols;

void requestInput();
void addMatrices(int **ptr_matrix1, int **ptr_matrix2, int n_rows, int n_cols);
void displayMatrix(int **ptr_matrix, int n_rows, int n_cols);

int main(int argc, char *argv[]) {
    requestInput();
    addMatrices(ptr_matrix1, ptr_matrix2, n_rows, n_cols);
    displayMatrix(ptr_matrix1, n_rows, n_cols);

    for (int i = 0; i < n_rows; i++) {
        delete[] ptr_matrix1[i];
        delete[] ptr_matrix2[i];
    }

    delete[] ptr_matrix1;
    delete[] ptr_matrix2;

    return 0;
}

void requestInput() {
    cout << "Enter the number of rows:" << endl;
    cin >> n_rows;
    cout << "Enter the number of columns:" << endl;
    cin >> n_cols;

    ptr_matrix1 = new int *[n_rows];
    ptr_matrix2 = new int *[n_rows];

    for (int i = 0; i < n_rows; i++) {
        ptr_matrix1[i] = new int[n_cols];
        ptr_matrix2[i] = new int[n_cols];
    }

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_cols; j++) {
            cout << "Enter a number [" << i << "][" << j << "]" << endl;
            cin >> ptr_matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_cols; j++) {
            cout << "Enter a number [" << i << "][" << j << "]" << endl;
            cin >> ptr_matrix2[i][j];
        }
    }
}

void addMatrices(int **ptr_matrix1, int **ptr_matrix2, int n_rows, int n_cols) {
    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_cols; j++) {
            ptr_matrix1[i][j] += ptr_matrix2[i][j];
        }
    }
}

void displayMatrix(int **ptr_matrix, int n_rows, int n_cols) {
    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_cols; j++) {
            cout << "The element of the matrix [" << i << "][" << j << "] is: " << ptr_matrix[i][j] << endl;
        }
    }
}
