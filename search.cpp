#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
 int s = 0;
 int e = arr.size();
 int mid = s+(e-s)/2;
 while(s<e){
    if(arr[mid]>=arr[0])
    s=mid+1;
    else{e =mid;}
     mid =s+(e-s)/2;
 }
 return s;
}
int getPivot(int arr[], int n, int k){
    int s= 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e= mid -1;
        }
        else if(arr[mid]<k){
            s= mid +1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    if(k >= arr[privot]&&k<=arr[n-1]){
        return binsearch(arr, privot, n-1, k)
    }
    else{
        return binsearch(arr, 0, privot-1, k)
    }
}

