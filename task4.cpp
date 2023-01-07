# include <iostream>
using namespace std;
main()
{
int hour1;
int hour;
float neededhour;
float days;
int traininghour;
int extrahour;
float workers;
int workinghour;
cout <<"enter days";
cin >>days;
cout <<"enter hour  ";
cin >>hour;
cout <<"enter workers";
cin >> workers;
int workingdays=days/10;
neededhour=workers*hour*days;
traininghour=neededhour/10;
workinghour=neededhour-traininghour;
if (neededhour>traininghour)
{ 
extrahour=neededhour-traininghour;
cout <<"extrahour"<<extrahour<<endl;
}
if (neededhour<traininghour);
{hour1=neededhour-workinghour;
cout <<"hour1"<<hour1<<endl;
}
}








