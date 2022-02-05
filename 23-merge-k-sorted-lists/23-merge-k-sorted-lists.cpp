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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0){
            return NULL;
        }
        
        ListNode head(0);
        ListNode* temp = &head;
        vector<int>li;
        for(ListNode* list:lists){
            while(list!=NULL){
                li.push_back(list->val);
                list=list->next;
            }
        }
        sort(li.begin(),li.end());
        for(auto val:li){
            temp->next = new ListNode(val);
            temp=temp->next;
        }
        return head.next;
    }
};