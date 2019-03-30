class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		unordered_set<ListNode *> us;
		while (head){
			if (us.find(head) != us.end())
				return head;
			else{
				us.insert(head);
				head = head->next;
			}
		}
		return NULL;
	}
};