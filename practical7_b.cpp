#include<iostream>
using namespace std;
class dis
{
    private :
    int feet;
    float inch;
    public :
    void getdata()
    {
        cout<<"Enter the Feet = "<<endl;
        cin>>feet;
        cout<<"Enter the Inch = "<<endl;
        cin>>inch;
    }
    void cal(dis d1,dis d2)
    {
        feet=d1.feet+d2.feet;
        inch=d1.inch+d2.inch;
        if(inch>=12)
        {
            inch=inch-12;
            feet++;
        }
    }
    void showdata()
    {
        cout<<feet<<endl<<inch<<endl;
    }
};
int main()
{
    dis a,b,c;
    a.getdata();
    b.getdata();
    c.cal(a,b);
    cout<<"Distance ="<<endl;
    c.showdata();
}