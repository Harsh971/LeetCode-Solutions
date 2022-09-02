class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *one = head, *two = head;
        while (two && two->next) {
            one = one->next;
            two = two->next->next;
            if (one == two) 
            {
                break;
            }
        }
        if (!(two && two->next)) 
        {
            return NULL;
        }
        while (head != one) 
        {
            head = head->next;
            one = one->next;
        }
        return head;
    }
};