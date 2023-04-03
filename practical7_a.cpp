#include<iostream>
using namespace std;
class objcount
{
    private :
    static int count;
    int number;
    public :
    void get_data(int a)
    {
        number=a;
        count++;
    }
    void show()
    {
        cout<<count<<endl;
    }
};
int objcount::count;
int main()
{
    objcount a,b,c;
    a.show();
    b.show();
    c.show();
    a.get_data(10);
    b.get_data(10);
    c.get_data(10);
    a.show();
    b.show();
    c.show();
}