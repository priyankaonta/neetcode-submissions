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

        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode dummy(0);
        ListNode *curr = &dummy;
        

        while (p1 != nullptr && p2 != nullptr) {
            if(p1->val <= p2->val) {
                curr->next = p1;
                curr = curr->next;
                p1 = p1->next;
            } 
            else if(p1->val > p2->val) {
                curr->next = p2;
                curr = curr->next;
                p2 = p2->next;
            } 
        }

        if(p1 == nullptr) {
            curr->next = p2;
        }
        else if(p2 == nullptr){
            curr->next = p1;
        }
          
        return dummy.next;                                                                      

       

        
    }
};
