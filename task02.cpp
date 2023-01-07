# include <iostream>
using namespace std;
int pyramidvolume(int length,int width,int height);
main()
{
int volume;
int length;
int width;
int height;
string unit;
string cm;
string km;
string mm;
int v1;
cout <<"enter length in meter";
cin >>length;
cout <<"enter width";
cin >>width;
cout <<"enter height";
cin >>height;
cout <<"enter unit";
cin >>unit;

 volume=pyramidvolume(length,width,height);

if  (unit=="cm")
   {
   v1=volume*1000000;
   }
   if (unit == "mm")
   {
   v1=volume*1000000000;
   }
   if (unit=="km")
   {
    v1=volume/100000000;
   }
cout <<v1;
}
int pyramidvolume(int length,int width,int height)
{
 int volume1;
 volume1=(height*width*length)/3;
 return volume1;
return 0;
} 

 




