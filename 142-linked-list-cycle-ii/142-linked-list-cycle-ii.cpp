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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow,*fast;
        slow = head;
        fast = head;
        if(slow==NULL or fast==NULL){
            return NULL;
        }
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;

            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        return NULL;
    }
};