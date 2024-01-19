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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0); // A new ListNode named head is created with a value of 0 and it can't be null becaue null can't point to other nodes
        ListNode* curr = head; //curr we will use for traversal
        
        while(list1 != NULL && list2 != NULL){ //list 1 and list 2 value should not be equal to null
            if(list1->val <= list2->val){ //if list 1 val is smaller then
                curr->next = list1; //If the value in list1 is smaller or equal, the next node in                                       the merged list (curr->next) is set to the current node in                                         list1, and list1 is moved to its next node. 
                list1 = list1->next;
            }else{
                curr->next = list2; //Otherwise, the next node in the merged list is set to the                                         current node in list2, and list2 is moved to its next node.
                list2 = list2->next;
            }
            curr = curr->next; // curr is moved to its next node
        }
        
        if(list1 != NULL) curr->next = list1; //After the loop, if there are remaining nodes in                                                   list1 or list2, they are appended to the merged                                                   list.
        
        if(list2 != NULL) curr->next = list2;
        
        
        return head->next;
        
        
    }
};