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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //TC: O(m+n), SC: O(m+n) using extra space 
        if (!list1){
            return list2;
        }
        if (!list2){
            return list1;
        }
        ListNode* one = list1;
        ListNode* two = list2;
        ListNode* res = new ListNode();
        ListNode* head = res;
        ListNode* dummy = res;
        while(one && two){
            if(one->val < two->val){
                head->next = one;
                head = one;
                one = one->next;
            } else{
                head->next = two;
                head = two;
                two = two->next;
            }
        }
        while(one){
            head->next = one;
            head = one;
            one = one->next;
        }
        while(two){
            head->next = two;
            head = two;
            two = two->next;
        }
        return dummy->next;
    }
};
