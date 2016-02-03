#include<iostream>
#include<conio.h>
using namespace std;
class Opovr
{
    int img;
    int real;
public:
    Opovr(int i=0,int j=0)
    {

        real=i;
        img=j;
    }
    Opovr operator +(const Opovr &obj)
    {
      Opovr res(1,1);
      res.real= real + obj.real;
      res.img = img+obj.img;
      return res;

    }
    void print()
    {
        cout<<real<<" +i"<<img<<endl;
    }
};
int main()
{
    Opovr a(5,10), b(7,8);
    Opovr c;
    c=a+b;
    c.print();
    getch();
    return 0;
}




