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
        ListNode* list=new ListNode();
        ListNode* head=list;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            // ListNode * temp=
            int sum=l1->val+l2->val+carry;
            // int add=sum/10;
             list->next=new ListNode(sum%10);
             list=list->next;

             carry=sum/10;
             l1=l1->next;
             l2=l2->next;
        }
        while(l1!=NULL){
            int sum=l1->val+carry;
         list->next=new ListNode(sum%10 );
        //  list->next=new ListNode(sum%10+carry);
 list=list->next;

             carry=sum/10;
             l1=l1->next;

        }
while(l2!=NULL){
            int sum=l2->val+carry;
         list->next=new ListNode(sum%10);
        //  list->next=new ListNode(sum%10+carry);
 list=list->next;

             carry=sum/10;
             l2=l2->next;

        }
        if(carry){
           list->next=new ListNode(carry);
          
        }
        return head->next;
    }
};