#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Matrix is:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
