#include <map>

class Solution
{
public:
	int romanToInt(string s) {
		map<char, int> uom = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
		int result = 0;
		for (int i = 0; i < s.length(); i++){
			if (uom[s[i + 1]] > uom[s[i]]){
				result = result - uom[s[i]] + uom[s[i + 1]];
				i++;
			}
			else
				result += uom[s[i]];
		}
		return result;
	}
};