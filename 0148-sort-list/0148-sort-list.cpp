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
    ListNode* sortList(ListNode* head) {
        vector<int>elements;

        ListNode* temp=head;
        while(temp!=nullptr){
            elements.push_back(temp->val);
            temp=temp->next;
            
        }
        sort(elements.begin(), elements.end());
        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=elements[i];
            temp=temp->next;
            i++;
        }

        return head;

    }
};