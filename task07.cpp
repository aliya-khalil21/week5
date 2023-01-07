# include <iostream>
using namespace std;
float volume(float v1,float v2,float tv);
float pipe1(float pv1,float v1,float tv);
float pipe2(float pv2,float v2,float tv);
float overflow(float tp,float of);
main()
{
float v,p1,p2,of,h,v1,v2,tv,pv1,pv2,tp;
cout <<"enter volume of pool";
cin >>v;
cout <<"enter flow rate of first pipe per hour";
cin >>p1;
cout <<"enter flow rate of second pipe per hour";
cin >>p2;
cout <<"the hour that worker is absent";
cin >>h;

volume(v1,v2,tv);
float b=pipe1(pv1,v1,tv);
cout <<b;
float c=pipe2(pv2,v2,tv);
cout <<c;
float a=overflow(tp,of);
if(tv>v)
{
cout <<"the pool is of";
cout <<a;
}
if (tv<v);
{
cout <<"the pool is fill";
cout <<a;
}
}
float volume(float v1,float v2,float tv)
{int h;
float p1;
float p2;
float h;
v1=h*p1;
v1=h*p1;
tv=v1+v2;
return tv;
}
float pipe1(float pv1,float v1,float tv)
{
float h;
float p1;
float p2;
float v2; 
v1=h*p1;
v1=h*p1;
tv=v1+v2;
pv1=(v1/tv)*100;
return pv1;
}
float pipe2(float pv2,float v2,float tv)
{
float h;
float p1;
float p2;
float v1;
v1=h*p1;
v1=h*p1;
tv=v1+v2;
pv2=(v2/tv)*100;
return pv2;
}
float overflow(float tp,float of)
{ 
float v;
float pv1;
float pv2;
float tv;
tp=pv1+pv2;
of=
return of;

}

