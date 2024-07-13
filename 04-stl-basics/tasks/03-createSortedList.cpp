#include <iostream>
#include <vector>
#include <list>

// Implement createSortedList
std::list<int> createSortedList(std::vector<int>& vector){
    std::list<int> result;
    for(int el : vector){
        result.push_back(el);
    }
    result.sort();
    return result;
}
// add proper include :)

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
