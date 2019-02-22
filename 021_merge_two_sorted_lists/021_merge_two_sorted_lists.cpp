class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode head(0);
		ListNode * t = &head;
		while (l1 || l2){
			if (!l1){
				t->next = l2;
				break;
			}
			if (!l2){
				t->next = l1;
				break;
			}
			if (l1->val < l2->val){
				t->next = l1;
				l1 = l1->next;
			}
			else{
				t->next = l2;
				l2 = l2->next;
			}
			t = t->next;
		}
		return head.next;
	}
};