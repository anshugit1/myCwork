#include<iostream>
using namespace std;
class a
{
     int z=20;
public:
    int add(int x, int y)
    {
        if(x>2)
            return z;
        else
        return x+y;
    }

};
int main()
{
a b1;
int x,y;
x=b1.add(3,5);
y=b1.z;


cout<<"Value of x is "<<x;

return 0;
}
