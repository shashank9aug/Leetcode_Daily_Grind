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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>rev;
        ListNode*head2 = head;
        while(head2!=NULL){
            rev.push_back(head2->val);
            head2=head2->next;
        }
        reverse(rev.begin()+left-1,rev.begin()+right);
        int i=0;
        head2=head;
        for(int i=0;i<rev.size();i++){
            head2->val = rev[i];
            head2=head2->next;
        }
        return head;
    }
};