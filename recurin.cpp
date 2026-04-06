#include<iostream>
using namespace std;

bool issorted(int* arr, int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainpart = issorted(arr + 1, size - 1);
        int sum = arr[0] +remainpart;
        cout<<sum<<endl;
        return remainpart;
    }
}

int main(){
    int arr[5] = {2,4,9,9,9};
    int size = 5;
    int sum;

    bool ans = issorted(arr, size);
    cout<<sum<<endl;

    if(ans){
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
}