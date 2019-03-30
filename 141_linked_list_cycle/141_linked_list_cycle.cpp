class Solution {
public:
	bool hasCycle(ListNode *head) {
		unordered_set<ListNode *> us;
		while (head){
			if (us.find(head) != us.end())
				return true;
			else{
				us.insert(head);
				head = head->next;
			}
		}
		return false;
	}
};