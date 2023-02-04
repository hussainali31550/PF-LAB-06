#include<iostream>
using namespace std;
float price(string screen,int row,int columns);
main()
{
int row , col;
string screen;
float res;
cout<<"Enter the type of screen: ";
cin>>screen;
cout<<"Enter the number of rows: ";
cin>>row;
cout<<"Enter the number of columns: ";
cin>>col;
res=price(screen,row,col);
cout<<"Your price is - "<<res;
}
float price(string screen,int row,int columns)
{
float res;
res=row*columns;
if(screen=="premier")
{
  res=res*12.00;
}
else if(screen=="normal")
{
  res=res*7.50;
}
else if(screen=="discount")
{
  res=res*5.00;
}
else 
{
  cout<<"invalid";
}
return res;
}