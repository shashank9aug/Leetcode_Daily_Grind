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
    void deleteNode(ListNode* node) {
       //their are two senario node can be last node of linked list or middle node of ll
        if(node->next==NULL){
            delete node;
        }
        else{
            swap(node->val,node->next->val);
            ListNode*temp = node->next;
            node->next = node->next->next;
            delete temp;
        }
    }
};