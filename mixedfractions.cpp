#include <iostream>

int main() {
    int n;
    int d;
    
    do {
        std::cin >> n >> d;
        
        if (n != 0 && d != 0) {
            std::cout << n / d << " " << n % d << " / " << d << "\n";           
        }
    } while (n != 0 && d != 0);
    
    return 0;
}