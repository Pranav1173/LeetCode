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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* curr = head->next;
        while(curr!=NULL){
            if(curr->val!=0){
                temp->val += curr->val;
            }
            else{
                if(curr->next==NULL){
                    temp->next = NULL;
                }
                else{
                    temp->next = curr;
                }
                temp = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};