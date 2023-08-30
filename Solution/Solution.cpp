#include "Solution.h"

void MinStack::push(int val) {
    if (_data.empty()) {
        _data.emplace_back(std::pair(val, val));
    } else {
        _data.emplace_back(
                std::pair(val, _data[_data.size() - 1].second > val? val : _data[_data.size() - 1].second)
                );
    }
}

void MinStack::pop() {
    _data.pop_back();
}

int MinStack::top() {
    return _data[_data.size() - 1].first;
}

int MinStack::getMin() {
    return _data[_data.size() - 1].second;
}


