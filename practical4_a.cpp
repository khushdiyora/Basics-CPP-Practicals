#include<iostream>
using namespace std;
int swap(int &a,int &b);
int max(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter A = ";
    cin>>a;
    cout<<"Enter B = ";
    cin>>b;
    cout<<"Enter C = ";
    cin>>c;
    swap(a,b);
    cout<<"Maximum = "<<max(a,b,c)<<endl;
    return 0;
}
int swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"After Swap the Value = ";
    cout<<"A = "<<a <<endl;
    cout<<"B = "<<b <<endl;
}
int max(int a,int b,int c)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
}