#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid) {

    int painter = 1;
    long long total = 0;

    for(int i = 0; i < boards.size(); i++) {

        if(total + boards[i] <= mid) {
            total += boards[i];
        }
        else {
            painter++;

            if(painter > k || boards[i] > mid) {
                return false;
            }

            total = boards[i];
        }
    }

    return true;
}

long long findLargestMinDistance(vector<int> &boards, int k) {

    long long sum = 0;
    long long maxi = 0;

    for(int i = 0; i < boards.size(); i++) {
        sum += boards[i];
        maxi = max(maxi, (long long)boards[i]);
    }

    long long s = maxi;      // Important optimization
    long long e = sum;
    long long ans = -1;

    while(s <= e) {

        long long mid = s + (e - s) / 2;

        if(isPossible(boards, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return ans;
}