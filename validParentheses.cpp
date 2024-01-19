#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) //A for loop is initiated to iterate through each character c in the input string s
        {
            if (c == '(' || c == '{' || c == '[') { //If the current character is an open bracket ('(', '{', '['), it is pushed onto                                                         the stack. If it's a closing bracket, the else block is executed.
                st.push(c);
            } else {
                if (st.empty()) {
                    return false; // No matching open bracket for the current close bracket
                }
                char openBracket = st.top();
                st.pop();
                if ((c == ')' && openBracket != '(') ||
                    (c == '}' && openBracket != '{') ||
                    (c == ']' && openBracket != '[')) {
                    return false; // Mismatched open and close brackets
                }
            }
        }

        return st.empty(); // Check if there are no unmatched open brackets left
    }
};