#include <iostream>
using namespace std;

int main() {
    int n = 0;
    string a[20];
    string ans;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (a[0] > a[1]) {
        ans = "DECREASING";
        for (int i = 1; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                ans = "NEITHER";
            }
        }
    } else {
        ans = "INCREASING";
        for (int i = 1; i < n - 1; i++) { 
            if (a[i] > a[i + 1]) {
                ans = "NEITHER";
            }
        }
    }
    cout << ans;
    
    return 0;
}