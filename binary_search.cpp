#include<iostream>
#include<conio.h>
using namespace std;

int binary(int arr[],int k,int L,int R)
{
    if(L>R)
        return 0;
    else
        {
        int mid =L+(R-L)/2;
        if(arr[mid]>k)
            binary(arr,k,L,mid-1);
        else if(arr[mid]<k)
            binary(arr,k,mid+1,R);
        else
            return mid;
    }
}
int main()
{
    int arr[17]={1,3,4,6,8,9,12,31,32,45,46,56,65,67,78,78,89};
    int L=0,R=0,k;
    R=(sizeof(arr)/sizeof(int));
    cout<<"enter value "<<endl;
    cin>>k;
    int value=binary(arr,k,L,R);
    if(value==0)
        cout<<"value is not in array"<<endl;
    else
        cout<<"value is at position : "<<value<<endl;
    getch();
    return 0;
}
