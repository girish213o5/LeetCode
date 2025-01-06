/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* listHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* listTail = listHead;
    listTail->val = 0;

    
    while (true) {
        int val = (l1 ? l1->val: 0) + (l2 ? l2->val: 0) + listTail->val;

        listTail->val = val % 10;
        
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
        
        if (l1 || l2 || val/10) {
            listTail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            listTail->next->val = val/10;
            listTail = listTail->next;
            
        }
        else {
            listTail->next = NULL;
            return listHead;
        }
    }
}