/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //1st approach using hashset:-
        //TC: O(N), SC: O(M + N)
        // unordered_set<ListNode *>traverse_el;
        // while(headA){
        //     traverse_el.insert(headA);
        //     headA = headA->next;
        // }
        // while(headB){
        //     if(traverse_el.find(headB) != traverse_el.end()){
        //         return headB;
        //     }
        //     headB = headB->next;
        // }
        // return NULL;      
        
        //2nd approach using length and difference:-
        //TC: O(1) , SC: O(1)
        // int lengthA = 0, lengthB = 0;
        // ListNode* tempA = headA;
        // ListNode* tempB = headB;
        // //Count the lengths of both nodes
        // while(tempA){
        //     lengthA++;
        //     tempA= tempA->next;
        // }
        // while (tempB){
        //     lengthB++;
        //     tempB= tempB->next;
        // }
        // int difference = abs(lengthA - lengthB); //get the difference 
        // if(lengthA > lengthB){ //Make the larger node distance equal to smaller node distance.
        //     while(difference--){
        //         headA = headA->next;
        //     }
        // } else{
        //     while(difference--){
        //         headB = headB->next;
        //     }
        // }
        // //Iterate the list till both are equal 
        // while(headA != headB){
        //     headA = headA->next;
        //     headB = headB->next;
        //     if(headA == NULL || headB == NULL){
        //         return NULL;
        //     }
        // }
        // return headA;
        
        //Approach 3 using 1 pass
        // TC:O(N), SC:O(1)
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != tempB){
            tempA = tempA != NULL ? tempA->next : headB;
            tempB = tempB != NULL ? tempB->next : headA;
        }
        return tempA;
            
    }
};