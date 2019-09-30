#include <iostream>

int main() {
    std::string n;
    std::getline(std::cin, n);
    
    for (int i = 0; i < n.length(); i++) {
        if (n.substr(i, 1) == "a" || n.substr(i, 1) == "e" ||
        n.substr(i, 1) == "i" || n.substr(i, 1) == "o" || n.substr(i, 1) == "u")
            n = n.substr(0, i) + n.substr(i + 2, n.length() - i - 2);
    }
    
    std::cout << n;
    
    return 0;
}