#include<iostream>
using namespace std;
 fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else {
        return fun(fun(n+11));
    }
}
int main()
{
    int r;
    r=fun(99);
    cout<<r<<endl;
}