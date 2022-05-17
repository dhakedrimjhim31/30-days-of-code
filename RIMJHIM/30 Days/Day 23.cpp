#include <iostream>
using namespace std;
class student {
public:
student()
   {
cout<< "Constructor Used" <<endl;
   }
   ~student()
   {
cout<< "Destructor Used" <<endl;
   }
};
int main()
{
   student* S = new student[2];
delete[] S;
}
