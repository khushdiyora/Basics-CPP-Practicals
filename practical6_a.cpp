#include<iostream>
using namespace std;
class student
{
    int Enrollment;
    char name[20];
    int sub[3];
    
    public:
    void get()
    {
        int i;
        cout<<"Enter Enrollment = ";
        cin>>Enrollment;
        cout<<"Enter Name = ";
        cin>>name;
        cout<<"Enter marks of 3 subjects = ";
        for(i=0;i<=2;i++)
        {
            cin>>sub[i];
        }
    }
    void put()
    {
        int i;
        cout<<"Enrollment No = "<<Enrollment <<endl;
        cout<<"Name = "<<name <<endl;
        cout<<"Marks = "<<endl;
        for(i=0;i<=2;i++)
        {
            cout<<sub[i]<<endl;
        }
    }
    void cal()
    {
        int sum=0,avg,i,mark;/**/
        for(i=0;i<=2;i++)
        {
            sum=sum+sub[i];
        }
        avg=sum/3;
        cout<<endl<<"Total = "<<sum;
        cout<<endl<<"Percentage = "<<avg;
    }
};
int main()
{
    student s;
    s.get();
    s.put();
    s.cal();
}