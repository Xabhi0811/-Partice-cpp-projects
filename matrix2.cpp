#include <iostream>
#include <iomanip> // For formatting output (optional)

using namespace std;

// Define a constant size for simplicity
const int SIZE = 3; 

void displayMatrix(const int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            // setw(4) ensures consistent spacing for readability
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    // Declare the two input matrices and the result matrix
    int A[SIZE][SIZE], B[SIZE][SIZE], Sum[SIZE][SIZE];

    // --- 1. Input Matrix A ---
    cout << "Enter elements for Matrix A (" << SIZE << "x" << SIZE << "):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // --- 2. Input Matrix B ---
    cout << "\nEnter elements for Matrix B (" << SIZE << "x" << SIZE << "):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // --- 3. Matrix Addition Logic ---
    // Matrix addition requires adding corresponding elements (A[i][j] + B[i][j])
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // --- 4. Display Results ---
    cout << "\n---------------------------------" << endl;
    cout << "Matrix A:" << endl;
    displayMatrix(A);
    
    cout << "\nMatrix B:" << endl;
    displayMatrix(B);

    cout << "\nSum (A + B):" << endl;
    displayMatrix(Sum);
    cout << "---------------------------------" << endl;

    return 0;
}