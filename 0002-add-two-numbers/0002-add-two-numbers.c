/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct Node* createNode (int val) {
    struct ListNode* tmp = NULL;
    tmp = (struct ListNode*) malloc(sizeof (struct ListNode));
    if (tmp == NULL) {
        printf("Memory alloc failed \n");
        return NULL;
    }
    tmp->val = val;
    tmp->next = NULL;
    return tmp;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
     int carry = 0;
     struct ListNode* ansHead = createNode(-1);
     ansHead->next = NULL;
     struct ListNode* ans = ansHead;
     while ( l1 != NULL || l2 != NULL) {
         int res = 0;
         if (l1 != NULL) {
             res = res + l1->val;
             l1 = l1->next;
         }
         if (l2 != NULL) {
             res = res + l2->val;
             l2 = l2->next;
         }
         res = res + carry;
         carry = res/10;
         res = res % 10;    
         ans->next = createNode(res);
         ans = ans->next;
     }
     if (carry != 0) {
         ans->next = createNode(carry);

     }
     return ansHead->next;
}