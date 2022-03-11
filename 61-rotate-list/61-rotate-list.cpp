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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or k==0 or head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int count = 1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        cout<<count;
        
        temp->next=head;
        //because k ranges from 0 to 2*10^9 
        k = k%count;
         
        for(int i=0;i<count-k;i++){
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next=NULL;
        
        return head;
    }
};