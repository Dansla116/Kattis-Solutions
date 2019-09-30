#include <iostream>
#include <string>

int main() {
    std::string s;
    
    std::cin >> s;
    
    for (int i = 1; i < s.length() - 1; i++) {
        if (s.substr(i, 2) == "aa") {
            s = s.substr(0, i) + "a" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "bb") {
            s = s.substr(0, i) + "b" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "cc") {
            s = s.substr(0, i) + "c" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "dd") {
            s = s.substr(0, i) + "d" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ee") {
            s = s.substr(0, i) + "e" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ff") {
            s = s.substr(0, i) + "f" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "gg") {
            s = s.substr(0, i) + "g" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "hh") {
            s = s.substr(0, i) + "h" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ii") {
            s = s.substr(0, i) + "i" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "jj") {
            s = s.substr(0, i) + "j" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "kk") {
            s = s.substr(0, i) + "k" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ll") {
            s = s.substr(0, i) + "l" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "mm") {
            s = s.substr(0, i) + "m" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "nn") {
            s = s.substr(0, i) + "n" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "oo") {
            s = s.substr(0, i) + "o" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "pp") {
            s = s.substr(0, i) + "p" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "qq") {
            s = s.substr(0, i) + "q" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "rr") {
            s = s.substr(0, i) + "r" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ss") {
            s = s.substr(0, i) + "s" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "tt") {
            s = s.substr(0, i) + "t" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "uu") {
            s = s.substr(0, i) + "u" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "vv") {
            s = s.substr(0, i) + "v" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "ww") {
            s = s.substr(0, i) + "w" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "xx") {
            s = s.substr(0, i) + "x" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "yy") {
            s = s.substr(0, i) + "y" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
        if (s.substr(i, 2) == "zz") {
            s = s.substr(0, i) + "z" + s.substr(i + 2, s.length() - i - 2);
            i--;
        }
    }
    
    if (s.substr(0, 1) == s.substr(1,1)) s = s.substr(1, s.length() - 1);
    
    std::cout << s;
    
    
    return 0;
}