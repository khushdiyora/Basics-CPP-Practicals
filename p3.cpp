#include<iostream>
using namespace std;
float areaOfcircle( float radius_circle);
int main()
{
    float radius;
    cout<<"Enter the radius of circle = ";
    cin>>radius;
    cout<<"Area of circle = "<<areaOfcircle(radius);
    return 0;
}
float areaOfcircle( float radius_circle)
{
    float area_circle;
    area_circle=3.14*radius_circle*radius_circle;
    return area_circle;
}