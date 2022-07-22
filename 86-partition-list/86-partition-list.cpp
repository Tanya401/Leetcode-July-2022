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
    ListNode* partition(ListNode* head, int x) {
        ListNode*small = new ListNode(-1);
        ListNode*big = new ListNode(-1);
        ListNode*smallptr=small;
        ListNode*bigptr=big;
        ListNode*temp=head;
        while(temp){
            if(temp->val < x){
                smallptr->next = temp;
                smallptr=smallptr->next;
            }
            else{
                bigptr->next = temp;
                bigptr = bigptr->next;
            }
            temp=temp->next;
        }
        bigptr->next=NULL;
        smallptr->next=big->next;
        return small->next;
    }
};