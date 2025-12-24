#include <bits/stdc++.h>
using namespace std;

void graphSpecialSum(vector<int>& arr) {
    long long current = 0, best = LLONG_MIN;

    cout << "Index | Value | Transformed | CurrentSum | Graph\n";
    cout << "------------------------------------------------------\n";

    for (int i = 0; i < arr.size(); i++) {
        long long val = (i % 2 == 0) ? arr[i] : -arr[i];

        current = max(val, current + val);
        best = max(best, current);

        cout << setw(5) << i << " | "
             << setw(5) << arr[i] << " | "
             << setw(11) << val << " | "
             << setw(10) << current << " | ";

       
        int bars = abs(current);
        for (int j = 0; j < bars; j++) cout << "#";
        cout << "\n";
    }

    cout << "\nMaximum Special Sum = " << best << endl;
}

int main() {
    vector<int> arr = {6, -3, 3, 4};
    graphSpecialSum(arr);
    return 0;
}
