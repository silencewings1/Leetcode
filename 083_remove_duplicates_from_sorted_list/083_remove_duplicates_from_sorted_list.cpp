class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head)
			return NULL;
		ListNode * h = new ListNode(0);
		h->next = head;
		while (head->next)
			if (head->val == head->next->val)
				head->next = head->next->next;
			else
				head = head->next;
		return h->next;
	}
};