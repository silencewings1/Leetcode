class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		if (!head || !head->next)
			return head;
		ListNode res(0);
		ListNode *p = &res;
		ListNode *a = head;
		ListNode *b = head->next;
		while (a && b){
			a->next = b->next;
			b->next = a;
			p->next = b;
			p = a;
			a = a->next;
			if (a)
				b = a->next;
		}
		return res.next;
	}
};