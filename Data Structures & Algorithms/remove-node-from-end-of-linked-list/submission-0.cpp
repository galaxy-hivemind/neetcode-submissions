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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            size++;
        }

        if(!fast){
            size *= 2;
        } else {
            size = size * 2 + 1;
        }

        int toRemove = size - n + 1;

        if(toRemove == 1){
            head = head -> next;
            return head;
        }
        ListNode* temp = head;
        ListNode* parent = head;
        while(--toRemove){
            parent = temp;
            temp = temp -> next;
        }

        if(temp -> next == nullptr){
            parent -> next = nullptr;
            return head;
        }

        parent -> next = temp -> next;
        return head;
    }
};
