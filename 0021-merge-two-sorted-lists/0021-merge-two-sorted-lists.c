/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *new(int a){
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp -> val = a;
    temp -> next = NULL;

    return temp;
}


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    struct ListNode *node = NULL;

    while(list1 != NULL && list2 != NULL) {

        if(list1 -> val <= list2 -> val) {
            node = new(list1 -> val);
            list1 = list1 -> next;
        }
        else{
            node = new(list2 -> val);
            list2 = list2 -> next;
        }

        if (head == NULL) {
            head = node;
            tail = node;
        }
        else{
            tail -> next = node;
            tail = tail -> next;
        }
    }
    
    while(list1 != NULL) {
        
        node = new(list1 -> val);
        list1 = list1 -> next;

        if(head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = tail->next;
        }
    }
    
    while(list2 != NULL) {
        node = new(list2 -> val);
        list2 = list2 -> next;

        if(head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = tail->next;
        }
    }
    
    return head;
}