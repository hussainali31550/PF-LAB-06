#include<iostream>
using namespace std;
int pay(string day,string month,int bill);
main()
{
int bill,res;
string day,month;
cout<<"Enter the day";
cin>>day;
cout<<"Enter the month";
cin>>month;
cout<<"Enter the bill";
cin>>bill;
 res =pay(day,month,bill);
cout<<"bill is after discount"<<res;
}
int pay(string day,string month,int bill)
{
int totalbill;


 if(day== "sunday")
{
 if(month=="october"||month=="november"||month=="december")
{
totalbill  =(bill*10)/100;
totalbill=bill-totalbill;
}
else if(day=="monday")
{
if(month=="march"||month=="april")
{
totalbill  =(bill*5)/100;
totalbill=bill-totalbill;
}
else
{
cout<<"total bill is :"<<bill;
}
return totalbill;
}


}   



}