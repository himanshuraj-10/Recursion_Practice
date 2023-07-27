#include<iostream>
using namespace std;

fact(int n)
{
    if(n==0)
        return 1;
    else 
        return fact(n-1)*n;

}
int main()
{
    int result;
    result=fact(10);
    cout<<result<<endl;
}
/*int main()
{
    int s=1;
    for(int i=1;i<=10;i++)
    {
        s=s*i;

    }
    cout<<s<<endl;
}*/