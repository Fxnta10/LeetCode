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
    bool isPalindrome(ListNode* head) {
        vector<int>t;

        ListNode* temp;
        temp=head;
        while(temp!=NULL){
            t.push_back(temp->val);
            temp=temp->next;
        }

        int l=0;
        int r=t.size()-1;
        while(l<=r){
            if(t[l]!=t[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};