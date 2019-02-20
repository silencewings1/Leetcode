class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) return "";
		string result = strs[0];
		for (auto it : strs){
			int len = min(result.length(), it.length());
			int i;
			for (i = 0; i < len; i++)
				if (result[i] != it[i])
					break;
			result = result.substr(0, i);
		}
		return result;
	}
};