#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  
   int x, y, z, max;
   cout<<"Enter any three numbers: ";
   cin>>x>>y>>z;
   max = x;
   if(y>max)
   {
      max = y;
   }
   if(z>max)
   {
      max = z;
   }
   cout<<"\n"<<"The largest of "<<x<<", "<<y<<" and "<<z<<" is "<<max;
   getch();
}
