#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0){
        return 0;
    }
    int tab[sequence];
    tab[0] = 1;
    tab[1] = 1;
    int current = 1;
    for(int i = 2; i < sequence; i++){
        tab[i] = tab[i-1] + tab[i-2];
        current = tab[i];
    }
    return current;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0){
        return 0;
    }
    if (sequence <= 2){
        return 1;
    }
    else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
