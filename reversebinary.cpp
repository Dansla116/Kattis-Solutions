#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

int main() {
    int n;
    std::string a;
    
    std::cin >> n;
    
    do {
        if (n % 2 == 0) a = "0" + a;
        if (n % 2 == 1) a = "1" + a;
        n = n / 2;
    } while (n != 0);
    
    n = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a.substr(i, 1) == "1") {
            n = n + pow(2, i);
        }
    }
    
    std::cout << n;
    
    return 0;
}