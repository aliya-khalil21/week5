# include <iostream>
# include <cmath>
using namespace std;
float calculateheight(float base,float degree);
main()
{
float angle;
float degree;
float radian;
float base;
cout<<"enter base"<<endl;
cin >>base;
cout <<"enter degree"<<endl;
cin >>degree; 

calculateheight( base, degree);
}
float calculateheight(float base,float degree)
{
float angle; 
float radians;
float height;
float radian;

radian=57.298;
radians=degree/57.298;
angle=tan(radians);
height=angle*base;
cout <<"height is "<< height <<endl;
return height;
}
