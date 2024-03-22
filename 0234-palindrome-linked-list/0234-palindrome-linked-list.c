/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isEqual(struct ListNode* node1, struct ListNode** node2) {
    if (node1 == NULL) {
        return true;
    }
    int res = isEqual(node1->next, node2);
    if (res == false) return false;
    if (node1->val != (*node2)->val) {
        return false;
    }
    *node2 = (*node2)->next;
    return true;
}
bool isPalindrome(struct ListNode* head) {
    return isEqual(head, &head);
}