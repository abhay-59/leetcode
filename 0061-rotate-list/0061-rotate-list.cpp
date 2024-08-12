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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next){
            return head;
        }
        int n=0;
        ListNode* temp=head;
        ListNode* last=head;
        while(temp!=NULL){
            if(temp->next==NULL)last=temp;
            n++;
            temp=temp->next;
        }
        temp=head;
        k=k%n;
        if(k==0)return head;
        for(int i=1; i<=n-k-1; i++){
            temp=temp->next;
        }
        ListNode* newhead = temp->next;
        temp->next=NULL;
        last->next=head;
        return newhead;
    }
};