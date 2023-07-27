#include<iostream>
using namespace std;

sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;

}
int main()
{
    int n = 0;
    cout<<"Enter the No. you want to sum : "<<endl;
    cin>>n;
    long int Output = sum(n);
    cout<<"The sum is : "<<Output;
}