#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
int foo(int *number){
    *number = 10;

    return *number;
}

int bar(int *number){
    *number = 20;

    return *number;
}
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?

int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
