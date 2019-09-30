#include <iostream>
#include <string>

int main() {
    int n;
    int nA = 1;
    int nB = 0;
    int onB = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        onB = nB;
        nB += nA;
        nA = 0;
        nA = onB;
    }
    
    std::cout << nA << " " << nB;
    
    return 0;
}