# include <iostream>
using namespace std;
bool isSymmetrical(int number);
main()
{

int number;
bool b;
cout <<"enter number";
cin >>number;
b=isSymmetrical( number);
if (b==true)
{
cout <<"symmetrical";
}
if (b==false)
{
cout <<"nonsymmetrical";
}
}
bool isSymmetrical(int number)
{

int number1=number/100;

int number3=number%10;

if (number1==number3)
{
 
 return true;
}
if (number1!=number3)
{

return false;
 }
return 0;
}


