#include <iostream>
using namespace std;

int main() {
  short n;
  short x[20];
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  
  for (int i = 0; i < n; i++) {
    if (x[i] % 2 == 0) {
      cout << x[i] << " is even\n";
    }
    else cout << x[i] << " is odd\n";
  }
  
  return 0;
}