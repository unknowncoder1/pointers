#include <iostream>

using namespace std;

void myswap(int *ptr1, int *ptr2)
{
 *ptr1 = *ptr1 + *ptr2;
   *ptr2 = *ptr1 - *ptr2;
   *ptr1 = *ptr1 - *ptr2;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(&a, &b); // but mine doesn't ?!?!?!?!!!???

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
