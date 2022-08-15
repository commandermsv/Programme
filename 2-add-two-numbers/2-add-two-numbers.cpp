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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp=0;
        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        
            ListNode* l11=l1;
            ListNode* l22=l2;
            ListNode* tail;
            ListNode* hf;
            ListNode* head;
            ListNode* z;
        while(l11!=NULL && l22!=NULL){
            l11=l11->next;
            l22=l22->next;
        }
        if(l11==NULL) {
            head=l2;
            z=l1;
             hf=head;
        }
        else {
            head=l1;
            z=l2;
            hf=head;
             }
        
        while(head!=NULL){
            if(z==NULL){
                // cout<<"entry temp: "<<temp<<endl;
            int tv=(head->val+temp)%10;
            temp=(head->val+temp)/10;
            // cout<<"l1: "<<l1->val<<endl;
            // cout<<"l2: "<<l2->val<<endl;
            // cout<<"temp: "<<temp<<endl;
            tail=head;
            // cout<<"head value: "<<head->val<<endl;
            head->val=tv;
            head=head->next;
            // l1=l1->next;
            // l2=l2->next;
                
            }
            else{
            // head->val=head->val;
            cout<<"entry temp: "<<temp<<endl;
            int tv=(l1->val+l2->val+temp)%10;
            temp=(l1->val+l2->val+temp)/10;
            cout<<"l1: "<<l1->val<<endl;
            cout<<"l2: "<<l2->val<<endl;
            cout<<"temp: "<<temp<<endl;
            tail=head;
            cout<<"head value: "<<head->val<<endl;
            head->val=tv;
            head=head->next;
            l1=l1->next;
            l2=l2->next;
            z=z->next;
            }
        }
        if(temp!=0){
            ListNode* s=new ListNode(tail->val/10);
            tail->next=s;
            s->val=temp;
        }
        // head=hf;
        // int k=0;
        // while(k==0 && hf->next!=NULL){
        //  if(hf->val==0){
        //      hf=hf->next;
        //  }
        //     else k=1;
        // }
        return hf;
    }
};