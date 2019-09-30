#include <iostream>
using namespace std;

int main() {
  int count = 0;
  int n[100];
  int s[100][100];
  int t[100][100];
  int ti[100][100];
  int trip[100];
  
  // input
  do {
    cin >> n[count];
    for (int i = 0; i < n[count]; i++) {
      cin >> s[count][i] >> t[count][i];
      trip[count] += s[count][i] * (t[count][i] - t[count][i - 1]);
    }
    count++;
  } while (n[count - 1] != -1);
  
  // transform
  for (int i = 0; i < count - 1; i++)
    cout << trip[i] << " miles\n";
    
  return 0;
}