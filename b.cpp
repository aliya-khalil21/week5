# include <iostream>
using namespace std;
int value(int number);
main()
{
int y;
int number;
cout << "enter five digit number";
cin >>number;
y=value(number);
if (y%2==0)
{
  cout <<"even";
}
if (y%2!=0)
{
 cout <<"odd";
}
}
int value(int number)
{
int sum;
int a=number/10;
int d1=number%10;
int b=a/10;
int d2=a%10;
int c=b/10;
int d3=b%10; 
int d=c/10;
int d4=c%10;
int e=d/10;
int d5=d%10;
sum=d1+d2+d3+d4+d5;
cout <<"sum";
cout<<sum;
return sum;

}