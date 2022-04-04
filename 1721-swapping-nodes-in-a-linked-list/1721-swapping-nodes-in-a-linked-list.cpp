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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp = head;
        int n = 0;
        while(temp!=NULL){
            n+=1;
            temp = temp->next;
        }
        
        if(n==1){
            return head;
        }
        temp = head;
        for(int i=1;i<k;i++){
            temp = temp->next;
        }
        ListNode*curr = head;
        for(int i=1;i<=(n-k);i++){
            curr=curr->next;
        }
        cout<<curr->val<<","<<temp->val;
        int s = temp->val;
        temp->val = curr->val;
        curr->val = s;
        return head;
    }
};