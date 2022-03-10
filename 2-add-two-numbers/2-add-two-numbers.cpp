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
private:
    ListNode* addnum(ListNode*l1,ListNode*l2,int rem){
        //base case :
        ListNode*ans = new ListNode();
        
        if(l1!=NULL and l2!=NULL){
            ans->val=(l1->val + l2->val + rem)%10;
            rem = (l1->val + l2->val + rem)/10;
            ans->next = addnum(l1->next,l2->next,rem);
        }
        else if(l1!=NULL and l2==NULL){
            ans->val=(l1->val + rem)%10;
            rem = (l1->val + rem)/10;
            ans->next = addnum(l1->next,l2,rem);
        }
        else if(l2!=NULL){
            ans->val=(l2->val + rem)%10;
            rem = (l2->val + rem)/10;
            ans->next = addnum(l1,l2->next,rem);
        }
        else if(rem!=NULL){
            ans->val=rem;
        }
        else{
            return NULL;
        }
        return ans;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addnum(l1,l2,0);
    }
};