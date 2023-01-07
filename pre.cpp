# include <iostream>
# include <cmath>
using namespace std;

main()
{
int total;
float number1;
float number2;
cout <<"enter number:";
cin >>number1;
cout <<"enter number:";
cin >>number2;
total=max(number1,number2);
cout << total <<"is greater number"<<endl;
total=min(number1,number2);
cout <<total <<"is minimum number"<<endl;
total= sqrt(number1);
cout <<"squareroot"<<total<<endl;
total=pow(3,4);
cout <<"power"<<total<<endl;
total=cbrt(27);
cout <<"cuberoot"<<total<<endl;
total=ceil(4.48);
cout <<total<<"decimal"<<endl;
total=floor(4.48);
cout <<total<<"decimal"<<endl;
}