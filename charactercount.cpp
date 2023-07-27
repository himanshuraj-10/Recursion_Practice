#include<iostream>
using namespace std;

int main()
{
    char n;
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    int count=0;
    cout<<"Enter the character you want to search : ";
    cin>>n;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==n)
        count++;
    }
    cout<<"No.of occerence of character is : "<<count<<endl;
}