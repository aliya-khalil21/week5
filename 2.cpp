# include <iostream>
# include <cmath>
using namespace std;
float value(float X1,float X2);
main()
{
float X1;
float X2;
value(X1,X2);

}
float value(float X1,float X2)
{
float a=5;
float b=6;
float c=1;
int add;
int subtract;
int subtract2;
int division1;
int division2;
int product;
int total1;
int total2;
int total3;
total1=pow(b,2);
product=4*a*c;
subtract=total1-product;
total2=sqrt(subtract);
add=-b+total2;
division1=add/(2*a);
X1=division1;
cout << "value of X1"<<X1;
subtract2=-b-total2;
division2=subtract2/(2*a);
X2=division2;
cout << "value of X2"<<X2;
return X1;
return X2;
}

