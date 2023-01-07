# include <iostream>
using namespace std;
main()
{
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
float neededhour;
float workingdays=days*0.9;
neededhour=workingdays*workers*10;
if (neededhour>hour)
{ 
extrahour=neededhour-hour;
cout <<"yes!the hours left"<<extrahour;
} 
if (neededhour<hour)
{
 neededextrahour=hour-neededhour;
 cout <<"not enough time"<<neededextrahour;
}

}

