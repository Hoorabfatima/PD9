#include<iostream>
using namespace std;
main()
{
  int numbers[3];
  int n,i;
  for(i=0; i<3; i++)
 {
  cout<<"Enter the array: ";
  cin>>numbers[i];
 }
 cout<<"Enter the number of times even-odd transformation need to be done: ";
 cin>>n;
  for(i=0; i<3; i++)
  {
    for(int j=1; j<=n; j++)
   {
   if(numbers[i]%2==0)
    numbers[i]=numbers[i]-2;
   else
    numbers[i]=numbers[i]+2;
   }
   cout<<numbers[i]<<"\t";
  }
 }