#include <iostream>

using namespace std;

class Average {
public:
    static void calculateAverage() {
        double num1, num2, num3;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter third number: ";
        cin >> num3;
        
        double average = (num1 + num2 + num3) / 3;
        
        cout << "The average of the three numbers is: " << average << endl;
    }
};

int main() {
    
    Average::calculateAverage();
    return 0;
}

