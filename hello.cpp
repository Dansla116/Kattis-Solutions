#include <iostream>
using namespace std;

int main() {
  int n;
  int p;
  string name[1000];
  
  cin >> n >> p;
  for (int i = 1; i <= n; i++) {
    cin >> name[i];
  }
  cout << p << "\n";
  system("pause");
  
  return 0;
}