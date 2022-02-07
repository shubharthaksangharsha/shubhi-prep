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
        //Normal Approach Using TC: O(2N), SC: O(1)
//         ListNode* temp = head;
//         int length = 0;
//         while (temp){
//             length++;
//             temp = temp->next;
//         }
//         if (length == n){
//             head = head->next;
//             return head;
//         }
//         int new_length = length - n;
//         temp = head;
//         while (--new_length){
//             temp = temp->next;
//         }
//         ListNode* del_node = temp->next;
//         temp->next = temp->next->next;
//         delete del_node;
//         return head;
        
        //Another Approach using TC: O(N) and SC: O(1)
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;
        for(int i = 1; i <= n; i++){
            fast = fast->next;
        }
        while(fast ->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delete_node = slow->next;
        slow->next = slow->next->next;
        delete delete_node;
        return start->next;
        
    }
};
