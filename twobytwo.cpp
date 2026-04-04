#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[100][100], b[100][100], sum[100][100];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> a[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> b[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Sum Matrix:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}
