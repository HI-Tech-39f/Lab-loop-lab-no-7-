#include<iostream>
using namespace std;
int main()
{
int sum=0;
cout<<"First five natural numbers are : ";
for(int i = 1; i <= 5; i++)
{
sum=sum+i;
cout<<i<<",";
}
cout<<"\nThe sum of first five natural numbers is : "<<sum;
return 0;
}