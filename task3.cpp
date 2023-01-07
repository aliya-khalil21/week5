# include <iostream>
# include <cmath>
using namespace std;
bool issymmetrical(int number,int number1,int number2,int number3);
main()
{
cout <<"enter number";
cin >>number;
int number1;
int number2;
int number3; 
int number1=number%10;
for number2=number1/10;
int number2=number1%10;
for number3=number2/10;
int number3=number2%10;
issymmetrical( number, number1, number2, number3);
}

bool issymmetrical(int number,int number1,int number2,int number3)
{ 


if (number1=number3)
{
 cout <<"true"<<true<<endl;
}
if (number1!=number3)
{
 cout <<"false"<<false<<endl;
}
}



