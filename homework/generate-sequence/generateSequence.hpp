#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    int last = step;
    std::vector<int> sequencer;
    for(int i = 0; i < count; i++){
        sequencer.push_back(last);
        last += step;
    }
    return sequencer;
}
