#include <iostream>

int main(){
    int tab[100];
    for(int i = 0; i <100; i++) {
        tab[i] = i;
    }
    std::cout << tab[50];
    return 0;
    }