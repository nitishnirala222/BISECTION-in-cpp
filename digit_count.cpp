#include<iostream>
using namespace std;
int count(int n)
{
if(n>0)
return 1+count(n/10);
else
return 0;
}
int main()
{
int digit,n;
cout<<"enter any number : ";
cin>>n;
digit=count(n);
cout<<"total number of digit is "<<digit;
}
