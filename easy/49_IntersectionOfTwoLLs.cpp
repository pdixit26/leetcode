Write a program to find the node at which the intersection of two singly linked lists begins.

SOlution:
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        int i =0;
        while(ptr1!=ptr2)
        {
            ptr1 = (ptr1==NULL)?headA:ptr1->next;
            ptr2 = (ptr2==NULL)?headB:ptr2->next;
        }
        return ptr1;
    }
};