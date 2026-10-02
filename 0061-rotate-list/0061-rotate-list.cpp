class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int n = 0;

        // Find last node and count links
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        // Actual number of nodes = n + 1
        k = k % (n + 1);

        if (k == 0)
            return head;

        // Save old tail
        ListNode* tail = temp;

        int jump = n - k;
        temp = head;

        while (jump) {
            temp = temp->next;
            jump--;
        }

        ListNode* returnedhead = temp->next;

        // Connect old tail to old head
        tail->next = head;

        // Break at new tail
        temp->next = NULL;

        return returnedhead;
    }
};