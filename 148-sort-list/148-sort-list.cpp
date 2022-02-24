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
    ListNode* sortList(ListNode* head) {
        vector<int>nodes;
        ListNode*temp = head;
        while(temp!=NULL){
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        sort(nodes.begin(),nodes.end());
        temp = head;
        for(auto n:nodes){
            temp->val = n;
            temp=temp->next;
        }
        return head;
    }
};