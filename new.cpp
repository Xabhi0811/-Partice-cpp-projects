#include <iostream>
using namespace std;

int sumOfEvenNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of even numbers to sum: ";
    cin >> n;

    int result = sumOfEvenNumbers(n);
    cout << "The sum of the first " << n << " even numbers is: " << result << endl;

    return 0;
}
