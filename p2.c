struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode* current = result;
    int sum, carry = 0;

    while (l1 != NULL || l2 != NULL) {
        sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        current->val = sum % 10;
        carry = sum / 10;

        // Only allocate a new node if there are more digits or carry
        if (l1 != NULL || l2 != NULL || carry > 0) {
            current->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            current = current->next;
        } else {
            current->next = NULL;
        }
    }

    if (carry > 0) {
        current->val = carry;
        current->next = NULL;
    }

    return result;
}