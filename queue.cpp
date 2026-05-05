#include<iostream>
using namespace std;

class circularQueue{
    int *arr;
    int currsize, cap;
    int f, r;

    public:  
    circularQueue(int size){
        cap=size;
        currsize =0;
        arr= new int[cap];
        f=0;
        r=-1;

    }
    void push(int data){
        if(currsize == cap){
          cout<<"cq is full\n";
          return ;
        }
        r =(r+1)%cap;
        arr[r] = data;
        currsize ++;

    }
    void pop(){
        if(empty()){
            cout<<"cq is empty\n";
            return ;
        }
        f=(f+1)%cap;
        currsize--;
    }

     int front(){
        if(empty()){
            cout<<"cq is empty\n";
            return -1;

        }
        return arr[f];
    }

    bool empty(){
        return currsize == 0;

    }

};



int main(){
    circularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);

}