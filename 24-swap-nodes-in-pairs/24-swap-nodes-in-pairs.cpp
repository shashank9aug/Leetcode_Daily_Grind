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
    ListNode* swapPairs(ListNode* head) {
        //base case : 
        if(head==NULL or head->next==NULL){
            return head;
        }
        
        ListNode*n1 = head;
        ListNode*n2 = head->next;
        ListNode*n3 = n2->next;
        
        n1->next = n3;
        n2->next = n1;
        
        if(n1!=NULL){
            n1->next = swapPairs(n3);
        }
        return n2;
    }
};