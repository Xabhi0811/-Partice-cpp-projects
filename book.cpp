#include<iostream>
#include<vector>
using namespace std;


bool ispossible(int arr , int n , int m , int mid ){
    int studentcount = 1;
    int pages = 0;
    for (int i = 0 ; i< n; i ++){ 
        if(pages+arr[i]<=mid)
        {
        pages+= arr[i];
        }
        else{ studentcount ++;
            if(studentcount>m ||arr[i]>mid){
                return false;
            }
            pages = arr[i];
        }
        
        if(studentcount>m){
             return false;
        }
    }
    return true;

}

int allocation(int arr , int n , int m , int mid){
int s =0 ;
int sum = 0;
for(int i =0; i<n; i++ ){
     sum+=arr[i];
}
  int e = sum;

int mid = s+(e-s)/2;
int ans =-1;
while(s<=e){
   
    if(ispossible(arr, int n , int m , int mid))
    {
        ans = mid ;
        e = mid -1;

    }
    else{ s = mid +1;
    }
    mid = s+(e-s)/2;

}
return ans;

}
