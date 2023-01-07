#include <iostream>
using namespace std;
float divide (int number1, int number2);
int add(int number1, int number2);
int isgreater(int number1,int number2);
main()
{
 int  number1;
 int  number2; 
 float division;
 int total;

 cout << "enter number1"<<endl;
 cin >> number1;
 cout << "enter number2"<<endl;
 cin >> number2;
total= add ( number1, number2);
 cout <<"total"<< total <<endl;
 division=divide ( number1, number2);
 cout <<"division"<< division <<endl;
 isgreater(number1,number2);
 total=isgreater(number1,number2);
 cout <<"total"<<total<<endl;
 cout<< "program ends";
}
float divide (int number1, int number2)
{
 int division;
 division=number1/number2;
 return division;

}
int add (int number1, int number2)
{
 int sum;
 sum=number1+number2;
 return sum;

}
int isgreater(int number1,int number2)
{
 if (number1 > number2)
{

 return number1;
}
if (number1 <number2)
{
 
 return number2;
}
return 0;
}
