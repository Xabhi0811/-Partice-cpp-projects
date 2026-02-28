#include<iostream>
using namespace std;

// Find Pivot
int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Normal Binary Search
int binarySearch(int arr[], int s, int e, int k){
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

// Search in Rotated Array
int search(int arr[], int n, int k){

    int pivot = getPivot(arr, n);

    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main(){

    int arr[5] = {7,9,1,2,3};
    int n = 5;
    int key = 2;

    cout << search(arr, n, key);

    return 0;
}