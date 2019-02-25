struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode head(0);
		ListNode *t = &head;
		int carry = 0;
		while (l1 || l2){
			int x = l1 ? l1->val : 0;
			int y = l2 ? l2->val : 0;
			int sum = x + y + carry;
			carry = sum / 10;
			t->next = new ListNode(sum % 10);
			t = t->next;
			if (l1) l1 = l1->next;
			if (l2) l2 = l2->next;
		}
		if (carry == 1)
			t->next = new ListNode(1);
		return head.next;
	}
};
