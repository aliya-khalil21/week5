# include <iostream>
using namespace std;
float A(float days,float workers,float hour);

main()
{
float neededhour;
float neededextrahour;
float extrahour;
float days;
float workers;
float hour;
cout <<"enter days";
cin >>days;
cout <<"enter workers";
cin >>workers;
cout <<"enter hour";
cin >>hour;
float workinghour;
float remaininghour;
workinghour=A(days,workers,hour);
float consumehour=(workinghour*10)/100;
remaininghour=workinghour-consumehour;
if (workinghour>hour)
{ 
extrahour=remaininghour-hour;
cout <<"yes!the hours left"<<extrahour;
} 
if (workinghour<hour)
{
 neededextrahour=hour-remaininghour;
 cout <<"not enough time"<<neededextrahour;
}
}
float A(float days,float workers,float hour)
{
float neededhour;
neededhour=hour*days*workers;
return neededhour;
}
