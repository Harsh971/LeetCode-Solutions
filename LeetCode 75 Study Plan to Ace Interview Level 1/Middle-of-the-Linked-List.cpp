class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* one = head;
        ListNode* two = head;
        while (two != NULL && two->next != NULL) {
            one = one->next;
            two = two->next->next;
        }
        return one;
    }
};