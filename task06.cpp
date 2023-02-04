#include<iostream>
using namespace std;
int isgreater(int num1,int num2,int num3);
main()
{
int price,num1,num2,num3;
string brand;
cout<<"Enter the price of dress";
cin>>price;
cout<<"Enter the name of brand";
cin>>brand;
if(price<=1500 && brand=="breakout")
{
  cout<<"buy the dress";
}
else
{
  cout<<"do not buy the dress";
}
}