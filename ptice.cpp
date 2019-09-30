#include <iostream>

int main() {
    int n;
    int m;
    std::string answers;
    std::string adrian = "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCA";
    std::string bruno = "BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
    std::string goran = "CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAA";
    int aScore = 0;
    int bScore = 0;
    int gScore = 0;
    
    std::cin >> n;
    std::cin >> answers;
    
    for (int i = 0; i < n; i++) {
        if (answers.substr(i, 1) == adrian.substr(i, 1)) aScore++;
        if (answers.substr(i, 1) == bruno.substr(i, 1)) bScore++;
        if (answers.substr(i, 1) == goran.substr(i, 1)) gScore++;
    }
    
    if (aScore >= bScore && aScore >= gScore) m = aScore;
    if (bScore >= aScore && bScore >= gScore) m = bScore;
    if (gScore >= aScore && gScore >= bScore) m = gScore;
    
    std::cout << m << "\n";
    if (m == aScore) std::cout << "Adrian\n";
    if (m == bScore) std::cout << "Bruno\n";
    if (m == gScore) std::cout << "Goran\n";
    
    return 0;
}