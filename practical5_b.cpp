#include<iostream>
using namespace std;
class box
{
    private :
    float length,width,height,volume=0;
    public :
    void cuboid()
    {
        cout<<"enter the length = ";
        cin>>length;
        cout<<"enter the width = ";
        cin>>width;
        cout<<"enter the height = ";
        cin>>height;
        volume=length*breath*height;
        cout<<"volume = "<<volume<<endl;
    }
    void cube()
    {
        float volume_l=0;
        int  l;
        cout<<"enter the l = ";
        cin>>l;
        volume_l = l*l*l;
        cout<<"volume_l = "<<volume_l;
    }
};
int main()
{
    box b;
    b.cuboid();
    b.cube();
}