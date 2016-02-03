#include<iostream>
using namespace std;
int main()
{
int nValue=6;
int nValue2=2;
int* const ptr=&nValue;
int const *ptr2= &nValue2;
nValue2=78;
*ptr2=32;

return 0;

}
