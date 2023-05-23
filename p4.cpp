#include<iostream>
using namespace std;
class objcount
{
    private :
    static int count;
    int number;
    public :
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void showdata()
    {
        cout<<count<<endl;
    }
};
int objcount::objcount;
int main()
{
    objcount a,b,c;
    a.getdata(5);
    b.getdata(5);
    c.getdata(5);
    a.showdata();
    return 0;
}