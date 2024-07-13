#include <iostream>
#include <vector>

// Implement concatenateVector.
std::vector<int> concatenateVector(std::vector<int>& vec1, std::vector<int>& vec2){
    std::vector<int> result;
    size_t maxSize = std::max(vec1.size(), vec2.size());
    for(int i = 0; i < maxSize; i++){
        if(i < vec1.size()){
            result.push_back(vec1[i]);
        }
        if(i < vec2.size()){
            result.push_back(vec2[i]);
        }
    }
    return result;
}
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
