#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = *vec.begin();
    for (auto el : vec){
        if (el > max){
            max = el;
        }
    }
    return max;
}
