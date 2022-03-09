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
    ListNode* deleteDuplicates(ListNode* head) {
        //in case of linkedlist recurssion : break the problem into two parts head and next function call
        if(head==NULL or head->next==NULL){
            return head;
        }
        
        ListNode*next = head->next;
        
        //next and head will be same : 
        if(next->val==head->val){
            // exclude all the next and head nodes
            while(next && next->val==head->val){
                next=next->next;
            }    
            //new head will be our next 
            return deleteDuplicates(next);
        }
        else{
            //include head
            head->next = deleteDuplicates(next);
            return head;
        }
        
    }
};