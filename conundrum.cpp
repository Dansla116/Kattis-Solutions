#include <iostream>
using namespace std;

int main() {
  string cipher;
  int days = 0;
  
  cin >> cipher;
  
  for (int i = 1; i <= cipher.length(); i++) {
    if (i % 3 == 1) {
      if (cipher.substr(i - 1, 1) != "P") days += 1;
    } else if (i % 3 == 2) {
      if (cipher.substr(i - 1, 1) != "E") days += 1;
    } else {    
      if (cipher.substr(i - 1, 1) != "R") days += 1;
    }
  }
    
  cout << days << "\n";
  return 0;
}