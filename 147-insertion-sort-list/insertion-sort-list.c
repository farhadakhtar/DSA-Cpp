struct ListNode* insert(struct ListNode* head,
                        struct ListNode* node) {
    if (head == NULL || node->val < head->val) {
        node->next = head;
        return node;
    }

    head->next = insert(head->next, node);
    return head;
}

struct ListNode* insertionSortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* rest = head->next;
    head->next = NULL;

    rest = insertionSortList(rest);

    return insert(rest, head);
}