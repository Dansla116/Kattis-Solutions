#include <iostream>
#include <sstream>

int main() {
    int n[30];
    std::string text;
    std::string t[30];
    std::string encrypted[30];  
    
    for (int i = 0; i <= 30; i++) {
        std::getline(std::cin,text);
        
        if (text != "0") {
            std::istringstream (text.substr(0, text.find(" "))) >> n[i];
            t[i] = text.substr(text.find(" ") + 1, text.length() - text.find(" ") - 1);
            for (int k = 0; k < n[i]; k++) {
                for (int j = 0; j < t[i].length(); j++) {
                    if (t[i].substr(j, 1) == "A") {
                        t[i] = t[i].substr(0, j) + "B" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "B") {
                        t[i] = t[i].substr(0, j) + "C" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "C") {
                        t[i] = t[i].substr(0, j) + "D" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "D") {
                        t[i] = t[i].substr(0, j) + "E" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "E") {
                        t[i] = t[i].substr(0, j) + "F" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "F") {
                        t[i] = t[i].substr(0, j) + "G" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "G") {
                        t[i] = t[i].substr(0, j) + "H" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "H") {
                        t[i] = t[i].substr(0, j) + "I" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "I") {
                        t[i] = t[i].substr(0, j) + "J" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "J") {
                        t[i] = t[i].substr(0, j) + "K" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "K") {
                        t[i] = t[i].substr(0, j) + "L" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "L") {
                        t[i] = t[i].substr(0, j) + "M" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "M") {
                        t[i] = t[i].substr(0, j) + "N" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "N") {
                        t[i] = t[i].substr(0, j) + "O" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "O") {
                        t[i] = t[i].substr(0, j) + "P" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "P") {
                        t[i] = t[i].substr(0, j) + "Q" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "Q") {
                        t[i] = t[i].substr(0, j) + "R" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "R") {
                        t[i] = t[i].substr(0, j) + "S" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "S") {
                        t[i] = t[i].substr(0, j) + "T" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "T") {
                        t[i] = t[i].substr(0, j) + "U" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "U") {
                        t[i] = t[i].substr(0, j) + "V" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "V") {
                        t[i] = t[i].substr(0, j) + "W" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "W") {
                        t[i] = t[i].substr(0, j) + "X" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "X") {
                        t[i] = t[i].substr(0, j) + "Y" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "Y") {
                        t[i] = t[i].substr(0, j) + "Z" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "Z") {
                        t[i] = t[i].substr(0, j) + "_" + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == "_") {
                        t[i] = t[i].substr(0, j) + "." + t[i].substr(j + 1, t[i].length() - 1);
                    } else if (t[i].substr(j, 1) == ".") {
                        t[i] = t[i].substr(0, j) + "A" + t[i].substr(j + 1, t[i].length() - 1);
                    }
                }
            }       
        } else {
            i = 30;
        }
    }
    
    for (int i = 0; i <= 30; i++) {
        for (int j = t[i].length(); j > 0; j--) {
            std::cout << t[i].substr(j - 1, 1);
        } 
        if (t[i].length()> 0) std::cout << "\n";
    }
    
    return 0;
}