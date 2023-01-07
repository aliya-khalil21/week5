# include <iostream>
# include <cmath>
using namespace std;
bool isSymmetrical(int number1,int number2,int number3);
main()
{
int number;
int number1, number2, number3;
cout <<"enter number";
cin <<number;
isSymmetrical(number1,number2,number3);
if (number1=number3);
{
 cout <<"true"<<true;
}
if (number1!=number3);
{
cout<<"false"<<false;
}
}
bool isSymmetrical(int number1,int number2,int number3)
{ 
int number;
int number1=number/100%10;
int number2=number/10%10;
int number3=number%10;
cout <<"number1"<<number1;
cout <<"number3"<<number3;

return number1;
return number2;
}


