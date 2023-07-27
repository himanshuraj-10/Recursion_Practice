#include<iosteam>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};

    for(int n=0;n<a.length;n++)
        for(int m=n+1;m<a.length;m++)

        if(a[n]==a[m])
        cout<<"The matching number are : "<<a[n]<<endl;
}