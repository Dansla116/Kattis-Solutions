#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::stringstream istringstream;
    
    int n;
    std::cin >> n;
    
    std::string name[n];
    std::string dateS[n];
    std::string dateB[n];
    int courses[n];
    
    int yearS[n];
    int yearB[n];
    
    std::string eligibility[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> name[i] >> dateS[i] >> dateB[i] >> courses[i];
        
        eligibility[i] = "ineligible";
        std::istringstream (dateS[i].substr(0,4)) >> yearS[i];
        std::istringstream (dateB[i].substr(0,4)) >> yearB[i];
        
        if (yearS[i] >= 2010) {
            eligibility[i] = "eligible";
        } else {
            if (yearB[i] >= 1991) {
                eligibility[i] = "eligible";
            } else {
                if (courses[i] < 41) {
                    eligibility[i] = "coach petitions";
                }
            }
        }
    }
    
    for (int i  = 0; i < n; i++) {
        std::cout << name[i] << " " << eligibility[i] << "\n";
    }
    
    
    return 0;
}