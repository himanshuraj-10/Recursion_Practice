#include<iostream>
using namespace std;
int main()
{
    int vowel=0;
    int consonent=0;
    string n;
    cout<<"Type the sentence you want : ";
    getline(cin,n);
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='0'||n[i]=='u')
            vowel++;
        else
        consonent++;
    }
    cout<<"No. of consonent is : "<<consonent<<endl;
    cout<<"No. of vowel is : "<<vowel<<endl;
     return 0;
}