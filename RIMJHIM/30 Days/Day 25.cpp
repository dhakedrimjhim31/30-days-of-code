#include<iostream>
using namespace std;
void num(int k)
{ try
  { 
      if(k==0)
    throw k;
    else if(k>0)
    throw 'p';
    else if(k<0) 
	throw 0;
   }
	catch(char g)
	{ cout<<"Caught a positive value!"<<endl;
	} 
	catch(int j)
	{ cout<<"Caught a null value!"<<endl;
	} 
	catch(double t)
	{ cout<<"Caught a negative value!"<<endl;
	} 
} 
int main()
{ num(0);
  num(5);
  num(-1);
  return 0;
}
