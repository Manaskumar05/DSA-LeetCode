/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *ptr = head;
    
    while(ptr != NULL) {


        if(head -> val == val) {
            head = head -> next;
            ptr = head;
            continue;
        }
        
        if(ptr->next != NULL && ptr->next->val == val) {
            ptr -> next = ptr -> next -> next;
            continue;
        }

        ptr = ptr -> next;
    
    }
    return head;
}