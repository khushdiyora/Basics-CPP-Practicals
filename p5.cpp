#include<iostream>
using namespace std;
class student
{
    private :
    int no;
    char name[20];
    float m1,m2,m3,per;

    public :
    void getdata()
    {
        cout<<"Enter the name = ";
        cin>>name;
        cout<<"Enter the enrollment no = ";
        cin>>no;
        cout<<"Enter the marks of boop = ";
        cin>>m1;
        cout<<"Enter the marks of English = ";
        cin>>m2;
        cout<<"Enter the marks of maths = ";
        cin>>m3;

        per=((m1+m2+m3)*100/300);
    }
    void showdata()
    {
        cout<<"Enrollment number = "<<no<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks of BOOP = "<<m1<<endl;
        cout<<"Marks of English ="<<m2<<endl;
        cout<<"Marks of Maths = "<<m3<<endl;
        cout<<"Your Percentage = "<<per<<endl;
    }
    
};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}