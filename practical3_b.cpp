#include<iostream>
using namespace std;
int main()
{
    int max=0,i,a[10],min=0;
    cout<<"enter the element = ";
    for(i=0;i<=9;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"maximum = "<<max <<endl;
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"minimun = "<<min;
}