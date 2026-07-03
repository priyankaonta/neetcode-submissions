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
        vector<int>mp;
        // store all nodes in a vector 
        while(head != nullptr){
            int val = head->val;
            mp.push_back(val);
            head = head->next;
        }
        
        //convert vector back into LL
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        for(int i = mp.size()-1; i >= 0; i--){
            tail->next = new ListNode(mp[i]);
            tail = tail->next;
        }

    return dummy->next;
    }
};
