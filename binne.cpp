#include<iostream>
using namespace std;
int last(  int arr[], int size,int key){

int s = 0 ;
int e = size-1;
int mid = (s+e)/2;
 while(s<=e)
 {
 	if(arr[mid]==key){
 		return mid;
	 } 
	 if(arr[mid]>key){
	 	e = mid -1;
	 } else if (key>arr[mid]){
	 
	    s = mid+1;
}  mid = (s +e)/2;
   }  return -1;
   
   
} 


int first(  int arr[], int size,int key){

int s = 0 ;
int e = size-1;
int mid = (s+e)/2;
 while(s<=e)
 {
 	if(arr[mid]==key){
 		return mid;
	 } 
	 if(arr[mid]>key){
	 	e = mid -1;
	 } else if (key>arr[mid]){
	 
	    s = mid+1;
}  mid = (s +e)/2;
   }  return -1;
   
   
} 








int main(){
	int even[5] ={3,8,11,14,16};
 int result = first(even, 5, 14);
 int res = last(even, 5, 14);

    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

}   

   if(res != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

} 