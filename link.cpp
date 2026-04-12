#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* prev;
	node* next;
	
	node(int val){
		data = val ;
		prev= next = nullptr;
	}
};

class douuble{

node * head ;
 node * tail;
	 public:	 
	 bouble(){
	 	 head = tail = nullptr;
	 }
};

int main(){
	node* node1 = new node(10);
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	return 0;
}
