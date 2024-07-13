#include <iostream>
#include <vector>
#include <string>

// Implement printVector to print the content of a given vector on screen.
void printVector(const std::vector<std::string>& someVec) {
    for(auto piece : someVec) {
        std::cout << piece << std::endl;
    }
}
// Each string in a new line.

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
