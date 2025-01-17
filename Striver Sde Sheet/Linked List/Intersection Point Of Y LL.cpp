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
        ListNode* slow=headA;
        ListNode* fast=headB;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            if(slow==fast){
                return slow;
            }
            if(slow==NULL){
                slow=headB;
            }
            if(fast==NULL){
                fast=headA;
            }
        }
        return slow;
    }
};