#include <iostream>  
using namespace std;  
void func1()  
{  
    cout<<"Sweety is called";  
}  
void func2(void (*funcptr)())  
{  
    funcptr();  
}  
int main()  
{  
  func2(func1);  
  return 0;  
} 
