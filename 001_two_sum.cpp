#include <unordered_map>
using std::unordered_map;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> uom;
		vector<int> result;

		for (int i = 0; i < nums.size(); i++){
			if (uom.find(target - nums[i]) != uom.end()){
				result.push_back(uom[target - nums[i]]);
				result.push_back(i);
				break;
			}
			else{
				uom.insert(make_pair(nums[i], i));
			}
		}
		return result;
	}

};
