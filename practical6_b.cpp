#include<iostream>
using namespace std;
class number
{
    private :
    int a,b,s1,s2;
    public :
    void getdata(int n,int m);
    void sum();
    void sub();
    void show()
    {
        cout<<"Two Numbers are = "<<endl;
        cout<<a<<endl<<b<<endl;
        cout<<"Addition = "<<s1<<endl;
        cout<<"Subtraction = "<<s2<<endl;    
    }
};
void number::getdata(int n,int m)
{
    a=m;
    b=n;
}
void number::sum()
{
    s1=a+b;
}
void number::sub()
{
    s2=a-b;
}
int main()
{
    number n;
    int p,q;
    cout<<"Enter the Two Numbers = "<<endl;
    cin>>p>>q;
    n.getdata(p,q);
    n.sum();
    n.sub();
    n.show();
} 