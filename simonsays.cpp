#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    
    std::string s[n];
    
    std::cin.ignore();
    for(int i = 0; i < n ; i++) {
        std::getline (std::cin, s[i]);
        if (s[i].substr(0,11) == "Simon says ") {
            s[i] = s[i].substr(11, s[i].length() - 11) + "\n";
        } else {
            s[i] = "";
        }
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << s[i];
    }
    
    
    return 0;
}