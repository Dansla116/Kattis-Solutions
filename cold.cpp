#include <iostream>

int main() {
    int n;
    int t[100];
    int count = 0;
    
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> t[i];
        if (t[i] < 0) {
            count++;
        }
    }
    
    std::cout << count;
    
    return 0;
}