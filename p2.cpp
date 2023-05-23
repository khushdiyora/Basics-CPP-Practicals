#include<iostream>
using namespace std;
int area(int);
int area(int , int);
float area(float , float);
int main()
{
    int s,l,b;
    float bs,ht;

    cout<<"Enter the side of square = ";
    cin>>s;
    cout<<"Enter the length and Breath of Rectangle = ";
    cin>>l>>b;
    cout<<"Enter the Base and Height of triangle = ";
    cin>>bs>>ht;

    cout<<"Area of square = "<<area(s);
    cout<<"Area of rectangle = "<<area(l,b);
    cout<<"Area of Triangle = "<<area(bs,ht);

}
int area(int s)
{
    return(s*s);
}
int area(int l, int b)
{
    return(l*b);
}
float area(float bs, float ht)
{
    return((bs*ht)/2);
}