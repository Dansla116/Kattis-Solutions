#include <iostream>
using namespace std;

int main() {
  int n[100];
  int set = 1;
  int o = 0;
  string oldOrder[100][15];
  string newOrder[100][15];
  
  do {
    cin >> n[set];
    for (int i = 0; i < n[set]; i++) {
      cin >> oldOrder[set][i];
    }
    set++;
  } while (n[set - 1] != 0);
  
  for (int i = 1; i < set - 1; i++) {
    cout << "SET " << i << "\n";
    for (int j = 0; j < (n[i] + 1) / 2; j++)
      cout << oldOrder[i][j * 2] << "\n";
    
    if (n[i] % 2 == 0)  {
      for (int j = n[i] - 1; j > 0; j--) {
        cout << oldOrder[i][j] << "\n";
        j--;
      }
    } else
      for (int j = n[i] - 2; j > 0; j--) {
        cout << oldOrder[i][j] << "\n";
        j--;
      }
  }
  return 0;
}