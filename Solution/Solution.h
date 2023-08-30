#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

class MinStack {
 public:
    MinStack() = default;
    void push(int val);
    void pop();
    int top();
    int getMin();
private:
    std::vector<std::pair<int, int>> _data;
};


#endif //LEETCODE_SOLUTION_H
