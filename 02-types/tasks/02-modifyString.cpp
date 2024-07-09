#include <iostream>
#include <string>

// TODO: Implement modifyString()
void modifyString(std::string& str){
    str = "Other string";
}
// It should modify passed string to text "Other string"

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
