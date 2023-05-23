#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,a[10];
    cout<<"Enter the unsorted Element = ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"sorted element = ";
    for(i=0;i<10;i++)
    {   
        cout<<a[i];
    }
}