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
        int ind = length(head) - n;
        ListNode* curr = head;
        if(ind == 0) {
            if (head->next){
            head = head->next;
            return head;
            } else {
                return 0;
            }
        };
        while (curr and ind-1) {
            curr = curr->next;
            ind--;
        }
        curr->next = curr->next->next;
        return head;
    }
    int length(ListNode* head) {
        int count = 0;
        while(head) {
            count++;
            head = head->next;
        }
        return count;
    }
};
