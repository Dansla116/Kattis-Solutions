#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    char n[50];
    bool c[3];
    
    std::cin >> n;
    
    c[1] = true;
    c[2] = false;
    c[3] = false;
    
    for (int i = 0; i < int(strlen(n)); i++) {
        if (n[i] == 'A') {
            c[0] = c[1];
            c[1] = c[2];
            c[2] = c[0];
        }
        if (n[i] == 'B') {
            c[0] = c[2];
            c[2] = c[3];
            c[3] = c[0];
        }
        if (n[i] == 'C') {
            c[0] = c[1];
            c[1] = c[3];
            c[3] = c[0];
        }
    }
    
    if (c[1] == true) std::cout << 1 << "\n";
    if (c[2] == true) std::cout << 2 << "\n";
    if (c[3] == true) std::cout << 3 << "\n";
    
    return 0;
}