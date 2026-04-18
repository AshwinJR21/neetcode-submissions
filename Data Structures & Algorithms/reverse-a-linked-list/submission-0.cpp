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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        if(curr){
            ListNode* ret = new ListNode(curr->val);
            curr = curr->next;
            while(curr) {
                insertAtBeginning(ret, curr->val);
                curr = curr->next;
            }
            return ret;
        } else {
            return head;
        }
        
    }
    void insertAtBeginning(ListNode*& head , int val) {
        ListNode* newnode = new ListNode();
        newnode->val = val;
        newnode->next = head;
        head = newnode;
    }
};
