#include<iostream>
using namespace std;
string check(int num1,int num2,int num3);
main()
{
int num1,num2,num3;
string num4;
cout<<"Enter the first number";
cin>>num1;
cout<<"Enter the secound number";
cin>>num2;
cout<<"Enter the third number";
cin>>num3;
num4=check(num1,num2,num3);
cout<<" "<<num4;
}
string check(int num1,int num2,int num3)
{
string num4="same",num5="not same";
 if(num1==num2&&num2==num3)
{
 return num4;
}  
 if(num1!=num2|| num2!=num3)
{
 return num5;
} 

}