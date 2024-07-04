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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* temp2=head->next;
        while (temp2!=nullptr) {
            int sum=0;
            while (temp2->val != 0) {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            temp2 = temp2->next;
            temp->val=sum;
            temp->next=temp2;
            temp=temp->next;
        }
        return head->next;
    }
};