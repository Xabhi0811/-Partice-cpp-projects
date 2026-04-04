#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter dimensions (X Y Z): ";
    cin >> x >> y >> z;

    // Dynamically allocate a 3D array
    int*** matrix = new int**[x];
    for (int i = 0; i < x; i++) {
        matrix[i] = new int*[y];
        for (int j = 0; j < y; j++) {
            matrix[i][j] = new int[z];
        }
    }

    int evenCount = 0, oddCount = 0;

    cout << "Enter elements:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> matrix[i][j][k];
                if (matrix[i][j][k] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
        }
    }

    cout << "\nElements of 3D Matrix:\n";
    for (int i = 0; i < x; i++) {
        cout << "Layer " << i << ":\n";
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    cout << "\nTotal Even Elements = " << evenCount << endl;
    cout << "Total Odd Elements  = " << oddCount << endl;

    // Free allocated memory
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] matrix[i][j];
        }
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
