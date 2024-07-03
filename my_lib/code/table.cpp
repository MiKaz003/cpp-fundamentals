#include <iostream>

int main(){
    int tab[100];
    for(int i = 0; i < 100; i++) {
        tab[i] = i;
    }
    for(int i = 0; i < 100; i++) {
        if (i % 2 == 1){
        std::cout << tab[i] << std::endl;
        }
    }
    return 0;
}