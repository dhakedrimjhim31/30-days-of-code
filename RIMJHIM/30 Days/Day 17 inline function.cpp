#include <iostream>
#include <cstdlib>
#define MAX(a,b,c) (a > b && a > c ? a : (b > c ? b : c))
#define MIN(a,b,c) (a < b && a < c ? a : (b < c ? b : c))
using namespace std;
int main()
{
 int x, y, z, large, small;
 cout << "HELLO" << "\n";
 printf("Enter 3 numbers: ");
 scanf("%d%d%d", &x, &y, &z);
 large = MAX(x, y, z);
 small = MIN(x, y, z);
 printf("\nMax between %d, %d, and %d is %d.", x, y, z, large);
 printf("\nMin between %d, %d, and %d is %d.", x, y, z, small);
 return 0;
}
