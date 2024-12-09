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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //removing the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* start = dummy;
        ListNode* end = dummy;

        for (int i = 0; i <= n; i++) {
            end = end->next;
        }
        while (end != nullptr) {
            start = start->next;
            end = end->next;
        }
        ListNode* temp = start->next;
        start->next = start->next->next;
        delete temp; 

        return dummy->next; 
    
    }
};