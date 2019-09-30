#include <iostream>
using namespace std;

int main() {
  int t;
  int n[50];
  string name[100];
  bool flag = 0;
  int numCities[50];
  
  //do
  cin >> t;
  //while (t <= 1 && t >= 50);
  
  for (int i = 0; i < t; i++) {
    numCities[i] = 0;
    
    //do {
    cin >> n[i];
    //} while (n[i] <= 1);
    
    for (int j = 0; j < n[i]; j++) {
    
      //do {
      cin >> name[j];
      //} while (name[j].length() > 20);
            
      flag = 1;
    
      for (int k = 0; k < j; k++) {
        if (name[k] == name[j]) {
          flag = 0;
        }
      }
    
      if (flag == 1) numCities[i] += 1; 
    }
  }
  
  for (int i = 0; i < t; i++) {
    cout << numCities[i] << "\n";
  }
  
  system("pause");
  return 0;
}