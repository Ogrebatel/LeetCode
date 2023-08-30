#include "Solution.h"

int Solution::evalRPN(std::vector<std::string> &tokens) {
    std::stack<int> digits;

    for (const auto &token: tokens) {
        if (token == "+") {
            int a = digits.top();
            digits.pop();

            int b = digits.top();
            digits.pop();

            digits.push(b + a);
        } else if (token == "/") {
            int a = digits.top();
            digits.pop();

            int b = digits.top();
            digits.pop();

            digits.push(b / a);
        } else if (token == "*") {
            int a = digits.top();
            digits.pop();

            int b = digits.top();
            digits.pop();

            digits.push(b * a);
        } else if (token == "-") {
            int a = digits.top();
            digits.pop();

            int b = digits.top();
            digits.pop();

            digits.push(b - a);
        } else {
            digits.push(atoi(token.c_str()));
        }
    }
    return digits.top();
}
