class Solution {
public:
	bool isValid(string s) {
		stack<char> T;
		for (char c : s){
			if (c == '(' || c == '[' || c == '{')
				T.push(c);
			else{
				if (T.empty())
					return false;
				if (c == ')'&&T.top() != '(')
					return false;
				if (c == ']'&&T.top() != '[')
					return false;
				if (c == '}'&&T.top() != '{')
					return false;
				T.pop();
			}
		}
		return T.empty();
	}
};