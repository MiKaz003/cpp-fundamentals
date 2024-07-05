#include <iostream>
#include <string>

// TODO: Implement modifyString()
std::string modifyString(std::string& str){
    str = "Other string";
    return str;
}
// It should modify passed string to text "Other string"

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
