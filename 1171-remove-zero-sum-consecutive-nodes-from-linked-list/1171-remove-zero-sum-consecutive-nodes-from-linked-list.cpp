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
    ListNode* removeZeroSumSublists(ListNode* head) {
      ListNode* dummy = new ListNode(0, head);
      int prefixSum = 0;
      unordered_map<int, ListNode*> prefixSumMap;
      ListNode* curr = dummy;
      while (curr != NULL) {
        prefixSum += curr->val;
        prefixSumMap[prefixSum] = curr;
        curr = curr->next;
      }
      // prefix 1 = 1, p 3 2, p 0 -3, p 3 3, p 4 1
      curr = dummy;
      prefixSum = 0;
      while (curr != NULL) {
        prefixSum += curr->val;
        curr->next = prefixSumMap[prefixSum]->next;
        curr = curr->next;
      }
      return dummy->next;
    }
};