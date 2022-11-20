class Solution {
 public:
  bool isPalindrome(ListNode* head) {
    ListNode* back = head;
    ListNode* front = head;

    while (front && front->next) {
      back = back->next;
      front = front->next->next;
    }

    if (front)
    {
       back = back->next; 
    }  
    back = reverseList(back);

    while (back) {
      if (back->val != head->val)
      {
        return false;
      }
      back = back->next;
      head = head->next;
    }

    return true;
  }

 private:
  ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;

    while (head) 
    {
      ListNode* next = head->next;
      head->next = prev;
      prev = head;
      head = next;
    }

    return prev;
  }
};
