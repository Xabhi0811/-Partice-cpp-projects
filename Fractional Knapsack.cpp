#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

bool compare(Item a, Item b) {
    return (double)a.value/a.weight > (double)b.value/b.weight;
}

double fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;

    for(auto &item : items) {
        if(W >= item.weight) {
            W -= item.weight;
            totalValue += item.value;
        } else {
            totalValue += item.value * ((double)W / item.weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    vector<Item> items = {{60,10}, {100,20}, {120,30}};
    int W = 50;

    cout << fractionalKnapsack(W, items);
}