 #include<iostream>
 using namespace std;
 int factorial(int n)
 {
     if(n==0)
      return 1;

        return n * factorial(n-1);
     
 }



 class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // move 1 step
            fast = fast->next->next;    // move 2 steps

            if (slow == fast) {
                return true;            // cycle detected
            }
        }

        return false; // no cycle
    }
};
 int main(){
    int n ;
    cin>>n;
    int ans = factorial(n);
    cout<<"factorial is "<<ans;
    return 0;

 }
