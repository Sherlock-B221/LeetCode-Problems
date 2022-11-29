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
    int lengthOfLinkedList(ListNode* head) {
        int length = 0;
        while(head != NULL) {
            ++length;
            head = head->next;
        }
        return length;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if ( head == NULL || head->next == NULL ) return head;
        int length = lengthOfLinkedList(head);
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode *prev = dummy;
        ListNode * cur;
        ListNode *next;
        
        while (length >= k ) {
            cur = prev->next;
            next = cur->next;
            for (int i = 1; i<k; i++) {
                cur->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = cur->next;
            }    
            prev = cur;
            length -= k;
        }
        return dummy->next;
        
    }
};