#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265

int main() {
    int h = 0;
    int v = 0;
    
    cin >> h >> v;
        
    cout << ceil(h / sin(v * PI / 180));
    
    return 0;   
}