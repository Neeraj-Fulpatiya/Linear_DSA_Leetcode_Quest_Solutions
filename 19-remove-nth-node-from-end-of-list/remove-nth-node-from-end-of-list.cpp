class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;

         while(temp != NULL) {
            size++;
            temp = temp->next;
        }

         if(n == size) {
            ListNode* newHead = head->next;
            delete head;  
            return newHead;
        }

         temp = head;
        for(int i = 1; i < size - n; i++) {
            temp = temp->next;
        }

        // Step 4: Delete target node
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del; // optional

        return head;
    }
};