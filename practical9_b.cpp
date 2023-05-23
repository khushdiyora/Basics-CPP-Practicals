#include<iostream>
using namespace std;
class cricketer
{
    private :
    char name[20],country[20];
    char type[50];
    int age,total_match;
    public:
    void getdata()
    {
        cout<<"Enter the name = "<<endl;
        cin>>name;
        cout<<"Enter the age = "<<endl;
        cin>>age;
        cout<<"Enter the country = "<<endl;
        cin>>country;
        cout<<"Enter Cricketer type = "<<endl;
        cin>>type;
        cout<<"Enter Total matches he/she played = "<<endl;
        cin>>total_match;
    }
    void showdata()
    {
        cout<<"Name ="<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Country = "<<country<<endl;
        cout<<"Types of Cricketer = "<<type<<endl;
        cout<<"Total matches he/she played = "<<total_match<<endl;
    }
}c[2];
int main()
{
    for(int i=0;i<=1;i++)
    {
        c[i].getdata();
    }
    for(int i=0;i<=1;i++)
    {
        c[i].showdata();
    }
}
