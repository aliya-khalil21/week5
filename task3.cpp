# include <iostream>
using namespace std;
main()
{
float finalprice;
float itemprice;
float taxamount;
float taxrate;
cout <<"enter itemprice";
cin >>itemprice;
char vehicalcode;
cout <<"enter vehicalcode";
cin>>vehicalcode;
if (vehicalcode=='M')
{ 
 taxrate=6;
}
if (vehicalcode=='E')
{ 
 taxrate=8;
}
if (vehicalcode=='S')
{ 
 taxrate=10;
}
if (vehicalcode=='V')
{ 
 taxrate=12;
} 
if (vehicalcode=='T')
{ 
 taxrate=15;
}
cout <<"taxrate"<<taxrate;
taxamount=itemprice*(taxrate/100);
cout <<"taxamount"<<taxamount<<endl;
finalprice=itemprice+taxamount;
cout <<"finalprice"<<finalprice<<endl;
}
