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
    ListNode* reverse(ListNode* reverse_node){
        if(!reverse_node){
            return NULL;
        }
        ListNode* cur = reverse_node;
        ListNode* prev = NULL;
        while(cur){
            ListNode* temp = cur->next;
            cur->next = prev;
            prev= cur;
            cur= temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast =head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* last = reverse(slow->next);
        ListNode* cur = head;
        while(last){
            if(last->val != cur->val){
                return false;
            }
            last = last->next;
            cur = cur->next;
        }
        return true;
    }
};
