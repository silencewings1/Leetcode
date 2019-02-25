class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode * h = new ListNode(0);
		h->next = head;
		ListNode * p1 = h;
		ListNode * p2 = h;
		for (; n >= 0; n--)
			p2 = p2->next;
		while (p2){
			p1 = p1->next;
			p2 = p2->next;
		}
		p1->next = p1->next->next;
		return h->next;
	}
};