#include <iostream>
using namespace std;
int add (int number1, int number2);

main()
{
 int  number1;
 int  number2; 
int total;
 cout << "enter number1"<<endl;
 cin >> number1;
 cout << "enter number2"<<endl;
 cin >> number2;
total= add ( number1, number2);
 cout <<"total"<< total <<endl;
cout<< "program ends";

}

int add (int number1, int number2)
{
 int sum;
 sum=number1+number2;
 return sum;

}