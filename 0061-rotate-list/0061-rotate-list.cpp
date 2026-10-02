class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        int n = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            n++;
        }

        k = k % n;

        if (k == 0)
            return head;

        // Make circular
        tail->next = head;

        // Find new tail
        ListNode* curr = head;

        for (int i = 1; i < n - k; i++) {
            curr = curr->next;
        }

        // New head
        head = curr->next;

        // Break circle
        curr->next = NULL;

        return head;
    }
};