class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int begin = 0;
		int end = nums.size() - 1;
		int mid = (begin + end) / 2;
		while ((begin != mid) && (end != mid)){
			if (target == nums[mid])
				return mid;
			else if (target < nums[mid])
				end = mid;
			else
				begin = mid;
			mid = (begin + end) / 2;
		}
		return end;
	}
};