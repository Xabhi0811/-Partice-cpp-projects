#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, deadline, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    Job jobs[] = {
        {1, 2, 100},
        {2, 1, 19},
        {3, 2, 27},
        {4, 1, 25},
        {5, 3, 15}
    };

    int n = 5;
    sort(jobs, jobs + n, cmp);

    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
        maxDeadline = max(maxDeadline, jobs[i].deadline);

    vector<int> slot(maxDeadline + 1, -1);
    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline; j > 0; j--) {
            if (slot[j] == -1) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Total Profit: " << totalProfit << endl;
    return 0;
}
