#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int *ptr = &arr[0][0];

    int rows = 2, cols = 3;

    cout << "Matrix using pointer:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(ptr + i * cols + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
