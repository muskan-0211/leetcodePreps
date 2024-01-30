/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Iterate through the linked list using two pointers
    while (fast && fast->next) {
      slow = slow->next;        // Move slow pointer by one step
      fast = fast->next->next;  // Move fast pointer by two steps

      // If there is a cycle, slow and fast pointers will meet
      if (slow == fast)
        return true;
    }

    // If no cycle is detected, return false
    return false;
  }
};
