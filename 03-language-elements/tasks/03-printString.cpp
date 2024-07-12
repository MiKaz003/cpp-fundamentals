#include <iostream>

// Write your function here
void printString(const std::string& word, const int value){
    for(int i = 0; i < value; i++){
        std::cout << word << std::endl;
    }
}

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}
