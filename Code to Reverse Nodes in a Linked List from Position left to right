struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (head == NULL || left == right) {
        return head;
    }

    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;

    struct ListNode* pre = dummy;
    for (int i = 0; i < left - 1; i++) {
        pre = pre->next;
    }

    struct ListNode* curr = pre->next;
    struct ListNode* next;
    for (int i = 0; i < right - left; i++) {
        next = curr->next;
        curr->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }

    return dummy->next;
}
