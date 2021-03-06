class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		if (!head)
			return NULL;
		ListNode * p1 = head;
		ListNode * p2 = head;
		int n = 1;
		for (; p2->next; n++)
			p2 = p2->next;
		p2->next = head;
		for (int i = 0; i < n - k%n - 1; i++)
			p1 = p1->next;
		ListNode * res = p1->next;
		p1->next = NULL;
		return res;
	}
};