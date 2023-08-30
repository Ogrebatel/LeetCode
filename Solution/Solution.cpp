#include "Solution.h"

bool Solution::isValid(std::string s) {
    std::stack<char> brackets;
    for (const auto &it: s) {
        if (it == '(' || it == '[' || it == '{') {
            brackets.push(it);
        } else if (brackets.empty()) {
            return false;
        } else if (it == ')') {
            if (brackets.top() != '(') {
                return false;
            }
            brackets.pop();
        } else if (it == ']') {
            if (brackets.top() != '[') {
                return false;
            }
            brackets.pop();
        } else if (it == '}') {
            if (brackets.top() != '{') {
                return false;
            }
            brackets.pop();
        }
    }
    return brackets.empty();
}
