#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,1,2};
    int f=sizeof(a)/sizeof(a[0]);
   // cout<<f<<endl;

    for(int n=0;n<f;n++)
        for(int m=n+1;m<f;m++)
        {

        if(a[n]==a[m])
        cout<<"The matching number are : "<<a[m]<<endl;
        }
}