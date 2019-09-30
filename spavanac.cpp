#include <iostream>
using namespace std;

int main() {
  int h = 0;
  int m = 0;    

  cin >> h >> m;
  
  if (m < 45) {
    if (h == 0) {
      cout << 23 << " ";
    }
    else {
      cout << h - 1 << " ";
    } 
    cout << m + 15;
  }
  else {
    cout << h << " " << m - 45;
  }
  return 0;
}