class Solution {
public:
	int val(char c){
		switch (c){
		case 'I':return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L':return 50;
		case 'C':return 100;
		case 'D':return 500;
		case 'M':return 1000;
		default:break;
		}
		return 0;
	}
	int romanToInt(string s) {
		int result = 0;
		for (int i = 0; i < s.length(); i++){
			if (val(s[i + 1])>val(s[i])){
				result = result - val(s[i]) + val(s[i + 1]);
				i++;
			}
			else
				result += val(s[i]);
		}
		return result;
	}
};