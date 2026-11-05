/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* nhead = new ListNode(-1);
        ListNode* temp = nhead;
        int rem = 0;
        while(temp1 && temp2){
            int val1 = temp1 -> val;
            int val2 = temp2 -> val;
            int addition;
            if(rem + val1 + val2 > 9){
                addition = rem + val1 + val2 - 10;
                rem = 1;
            } else {
                addition = rem + val1 + val2;
                rem = 0;
            }
            temp -> next = new ListNode(addition);
            temp = temp -> next;
            temp -> next = nullptr;

            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }

        while(temp1){
            int val1 = temp1 -> val;
            int addition;
            if(val1 + rem > 9){
                addition = val1 + rem - 10;
                rem = 1;
            } else {
                addition = val1 + rem;
                rem = 0;
            }

            temp -> next = new ListNode(addition);
            temp = temp -> next;
            temp -> next = nullptr;
            temp1 = temp1 -> next;
        }

        while(temp2){
            int val2 = temp2 -> val;
            int addition;
            if(val2 + rem > 9){
                addition = val2 + rem - 10;
                rem = 1;
            } else {
                addition = val2 + rem;
                rem = 0;
            }

            temp -> next = new ListNode(addition);
            temp = temp -> next;
            temp -> next = nullptr;
            
            temp2 = temp2 -> next;
        }

        if(rem){
            temp -> next = new ListNode(rem);
            temp = temp -> next;
            temp -> next = nullptr;
        }

        return nhead -> next;
    }
};
