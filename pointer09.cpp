#include <iostream>
using namespace std;

int main() {
    int arr[3] = {5, 10, 15};
    int *p = arr;

    cout << "Original values: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    // Modify using pointer
    for (int i = 0; i < 3; i++) {
        *(p + i) += 5;
    }

    cout << "\nModified values: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
