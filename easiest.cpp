#include <iostream>
using namespace std;

int main() {
  long n[10000];
  long p = 10;
  long sod1 = 0;
  long sod2 = 0;
  long value1 = 0;
  long value2 = 0;
  long result1 = 0;
  long result2 = 0;
  long count = 0;
  
  do {
    do {
      cin >> n[count];
    } while (n[count] < 0 || n[count] > 100000); 
    count++;
  } while (n[count - 1] != 0);
    
  for (int i = 0; i < count - 1; i++) {
    // get sod for n[i]
    result1 = 0;
    value1 = n[i];
    while (value1 > 0) {
      result1 += value1 % 10;
      value1 /= 10;
    }
    
    p = 10;
    do {
      p++;
    
      // get sod for p * n[i]
      result2 = 0;
      value2 = p * n[i];
      while (value2 > 0) {
        result2 += value2 % 10;
        value2 /= 10;
      }

      if (result1 == result2) cout << p << "\n";
    } while (result1 != result2);
  }
  
  system("pause");
  return 0;
}