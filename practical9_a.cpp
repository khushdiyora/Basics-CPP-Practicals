#include<iostream>
using namespace std;
class stat
{
    int num;
    public :
    stat(int n=0)
    {
        num=n;
    }
    static void print()
    {
        cout<<"Static member function"<<endl;
    }
};
int main()
{
    stat::print();
    stat s;
    s.print();
}