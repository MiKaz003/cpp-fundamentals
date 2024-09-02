#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate (const int count) {
    std::vector<std::shared_ptr<int>> result;
    for (int i = 0; i < count; i++){
        result.push_back(std::make_shared<int>(i));
    }
    return result;
}

// Done

void print (const std::vector<std::shared_ptr<int>>& vector){
    for (auto& element : vector){
        std::cout << element << std::endl;
    }
}

// Done

void add10 (std::vector<std::shared_ptr<int>>& vector){
    for (auto& element : vector){
        if (element != nullptr){
        *element += 10;
        }
    }
}

// Done

void sub10 (int* const ptr) {
    if (ptr != nullptr){
    *ptr -= 10;
    }
}

void sub10 (std::vector<std::shared_ptr<int>>& vector) {
    for (auto& element : vector){
        sub10(element.get());
    }
}