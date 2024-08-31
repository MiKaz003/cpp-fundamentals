#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate (const int count) {
    std::vector<std::shared_ptr<int>> result;
    for (int i = 0; i < count; i++){
        result[i] = std::make_shared<int>(i);
    }
    return result;
}

void print (std::vector<std::shared_ptr<int>> vector){
    for (auto element : vector){
        std::cout << element << std::endl;
    }
}