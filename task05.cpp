#include<iostream>
using namespace std;
float price(int dis, string period);
main()
{
int dis;
string period;
float res;
cout<<"Enter the distance: ";
cin>>dis;
cout<<"Enter the period of time: ";
cin>>period;
res=price (dis,period);
cout<<"Price is - "<<res;
}
float price(int dis, string period)
{
float tprice; 
 if(dis<20)
{
if(period=="day")
{ tprice= dis*0.79;
  tprice=tprice+0.70;  
}
if(period=="night")
{ 
  tprice= dis*0.90;
  tprice=tprice+0.70;  
}
}
else if(dis>=20 && dis<100 )
{
 tprice=dis*0.09;
}
else if(dis>=100 )
{
 tprice=dis*0.06;
}
else
{
cout<<"invalid"; 
}

return tprice;

}  

