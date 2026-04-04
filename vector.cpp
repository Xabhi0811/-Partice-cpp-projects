#include <iostream>
using namespace std;

void inputMatrix(int *ptr, int rows, int cols) {
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> *(ptr + i * cols + j);
        }
    }
}

void printMatrix(int *ptr, int rows, int cols) {
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(ptr + i * cols + j) << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int *ptr, int rows, int cols) {
    cout << "\nTranspose of Matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << *(ptr + i * cols + j) << " ";
        }
        cout << endl;
    }
}

void rowAndColSum(int *ptr, int rows, int cols) {
    // Row sums
    cout << "\nRow sums:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += *(ptr + i * cols + j);
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    // Column sums
    cout << "\nColumn sums:\n";
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += *(ptr + i * cols + j);
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate 2D array using 1D pointer
    int *matrix = new int[rows * cols];

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    transposeMatrix(matrix, rows, cols);
    rowAndColSum(matrix, rows, cols);

    delete[] matrix; // free memory
    return 0;
}
