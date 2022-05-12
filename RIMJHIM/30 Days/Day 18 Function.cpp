#include <iostream>
using namespace std;
  
int max(int x, int y) 
{ 
    if (x > y) 
    return x; 
    else
    return y; 
} 
  
int main() {
    int a = 50, b = 100; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(a, b); 
  
    cout << "m is " << m; 
    return 0; 
}
