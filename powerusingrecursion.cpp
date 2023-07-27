#include<iostream>
using namespace std;

/*pow(int m,int n)
{
    if(n==0)
        return 1;
    else
        return pow(m,n-1)*m;
}*/

//Second Method

pow(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return pow(m*m,n/2);
    else 
        return m*pow(m*m,(n-1)/2);
}


int main()
{
    int a,b;
    cout<<"Enter the M :";
    cin>>a;
    cout<<"Enter the n :";
    cin>>b;
    int c=pow(a,b);
    int d=1;

    //Third method using loop 
    for(int i=1;i<=b;i++)
    {
        //d =d*a;
         d*=a;
        

    }
    cout<<"The power of (m,n) = "<<d<<endl;

    cout<<"The power of (m,n) = "<<c<<endl;


}