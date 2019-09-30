#include <iostream>

int main() {
    std::string n;
    std::string m;
    bool valid;
    
    /*do {*/
        std::cin >> n;
        /*valid = true;*/
        
        /*for (int i = 0; i < n.length(); i++) {
            if (n.substr(i, 1) != "a") valid = false;
        }
        if (n.substr(m.length(), 1) != "h") valid = true;
        
    } while (valid == false);
    
    do {*/
        std::cin >> m;
        /*valid = true;
        
        for (int i = 0; i < m.length(); i++) {
            if (m.substr(i, 1) != "a") valid = false;
        }
        if (m.substr(m.length(), 1) != "h") valid = true;
        
    } while (valid == false);*/
    
    if (m.length() > n.length()) std::cout << "no\n";
    if (n.length() >= m.length()) std::cout << "go\n";
    
    return 0;
}