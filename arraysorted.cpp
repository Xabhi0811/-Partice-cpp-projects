#include <iostream>
#include <vector>
using namespace std;

void reverseAfterM(vector<int>& arr, int m) {
    int start = m + 1;
    int end = arr.size() - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        reverseAfterM(arr, m);

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}