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
    ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        //std::cout << slow->val;
        return slow;
    }
    ListNode* reverse(ListNode* curr) {
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        ListNode* head = curr;
        while (head != nullptr) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        // 1.find mid
        ListNode* mid = findMid(head);
        // 2.reverse nodes from mid
        ListNode* list2 = reverse (mid->next);
        ListNode* list1 = head;
        mid->next = nullptr;
        ListNode* curr = list2;
        
        // 3.merge the list
        while ( list1 != nullptr && list2 != nullptr) {
            ListNode* next1 = list1->next;
            ListNode* next2 = list2->next;
            list1->next = list2;
            list2->next = next1;
            list1 = next1;
            list2 = next2;
        }
    }
};