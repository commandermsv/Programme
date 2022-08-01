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
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        ListNode* temp1=head;
        if(head==NULL || head->next==NULL)
            return false;
        
        while(temp1->next!=NULL && temp1->next->next!=NULL){
           
            temp=temp->next;
            temp1=temp1->next->next;
             if(temp1==temp)
                return true;
        }
        return false;
    }
};