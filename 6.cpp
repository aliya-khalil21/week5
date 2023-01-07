# include <iostream>
using namespace std;
main()
{
int sum;
int result;
int hours;
int minutes;
int hour;
int min;
cout <<" enter hour";
cin >>hour;
cout <<"enter min";
cin >>min;
sum=min+15;
if (sum>59)
{
minutes=sum-59;
hours=hour+1;
if (hours==24)
{
hours=0;
}
cout <<hours<<":"<<minutes;
}
if (sum < 59)
{
hours=hour;
minutes=sum;
if (hours==24)
{
hours=0;
}
cout <<hours <<":"<<minutes;
}

}