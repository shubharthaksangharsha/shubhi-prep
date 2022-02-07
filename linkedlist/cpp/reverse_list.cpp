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
        //Iterative Approach
        //TC: O(N), SC: O(1)
        if (!head){
            return NULL;
        }
        ListNode* new_head = NULL;
        while(head){
            ListNode *next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;            
        }
        return new_head;       
        
    }
};
