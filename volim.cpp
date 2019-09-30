#include <iostream>

int main() {
    int k;
    int n;
    std::cin >> k;
    std::cin >> n;
    int t[n];
    char z[n];
    
    int ansT = 0;
    
    for (int i = 0; i < n; i++) {
        std::cin >> t[i] >> z[i];
        ansT += t[i];
        if (ansT <= 210 && z[i] == 'T') {
            k++;
            if (k == 9) k = 1;
        }
    }
    
    std::cout << k; 
    
    return 0;
}