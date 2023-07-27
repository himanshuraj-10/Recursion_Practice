#include<iostream>
#include<algorithm>
using namespace std;
bool isanagram(string s1,string s2)
{
    int n1=s1.length();
    int n2=s2.length();

    if(n1==n2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(int i=0;i<n1;i++)
            if(s1[i]!=s2[i])
            return false;
        else 
        return true;    

    }
    else 
    return false;
}
int main()
{
    string s1;
    string s2;
    cout<<"Enter the string 1 : ";
    cin>>s1;
    cout<<"Enter the string 2 : ";
    cin>>s2;
    if(isanagram(s1,s2))
    cout<<"Bothn Srting is anagram ";
    else
    cout<<"Both string is not anagram ";
    return 0;
}