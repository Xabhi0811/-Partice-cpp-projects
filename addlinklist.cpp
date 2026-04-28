class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;

            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }


            
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);
            temp->next = newNode;
            temp = temp->next;
        }

        return dummy->next;
    }
};