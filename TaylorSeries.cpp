#include<iostream>
using namespace std;

/*double t(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
        r=t(x,n-1);
        p *=x;
        f *=n;
        return r+p/f;
}*/
double t(int x,int n)
{
    double s=1;
    double num=1,den=1;
    for(int i;i<=n;i++)
    {    
        num *=x;
        den *=i;
        s = num/den;
    }
    return s;
}
int main()
{
    double a,b;
    cout<<"Enter the value of X : "<<endl;
    cin>>a;
    cout<<"Enter the value of n : "<<endl;
    cin>>b;
    double result =t(a,b);
    cout<<"The Result are : "<<result<<endl;

}