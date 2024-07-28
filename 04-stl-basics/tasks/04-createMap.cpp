#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

std::map<size_t, std::string> createMap(std::vector<int>& vec, const std::list<std::string>& list){
    std::map<size_t, std::string> result;
    auto it = list.begin();
    for (int i = 0; i < list.size(); i++){
        if (i >= vec.size()){
            vec.push_back(vec.back()+1);
        }
        result.insert({vec[i], *it});
        it++;
        }
    return result;
}

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list


int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five", "Six"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
