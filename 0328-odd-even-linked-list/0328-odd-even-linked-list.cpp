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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* odd = head;
        ListNode* evenTemp = head->next;
        ListNode* evenHead = evenTemp;

        while (evenTemp && evenTemp->next) {
            odd->next = evenTemp->next;
            odd = odd->next;
            evenTemp->next = odd->next;
            evenTemp = evenTemp->next;
        }

        odd->next = evenHead;
        return head;
    }
};