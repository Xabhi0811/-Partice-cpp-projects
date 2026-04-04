#include <iostream>
using namespace std;

int main() {
    // 2D array (matrix)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Pointer to the first element of the 2D array
    int *ptr = &arr[0][0];

    cout << "Accessing 2D array using pointer:\n";

    // Total elements = rows * cols = 3 * 3 = 9
    for (int i = 0; i < 3 * 3; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    return 0;
}
