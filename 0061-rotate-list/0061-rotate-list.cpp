class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        // Find length
        int n = 0;
        ListNode* curr = head;

        while (curr != NULL) {
            n++;
            curr = curr->next;
        }

        k = k % n;

        if (k == 0)
            return head;

        curr = head;

        for (int i = 1; i < n - k; i++) {
            curr = curr->next;
        }

        
        ListNode* newHead = curr->next;

        ListNode* tail = newHead;

        while (tail->next != NULL) {
            tail = tail->next;
        }

        // Connect old tail to old head
        tail->next = head;

        // Break the list
        curr->next = NULL;

        return newHead;
    }
};