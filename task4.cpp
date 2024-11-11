#include<iostream>
using namespace std;
main()
{
  int i,n,num;
  bool value=false;
  cout<<"Enter length of array: ";
  cin>>n;
  int numbers[n];
  for(i=0; i<n; i++)
  {
   cout<<"Enter array of numbers: ";
   cin>>numbers[i];
  }
  for(i=0; i<n; i++)
{
   if(numbers[i]==7)
   value=true;
   else if(numbers[i]>9)
  {
   num=numbers[i];
   while(num!=0)
  {
     num=numbers[i]%10;
     numbers[i]=numbers[i]/10;
     if(num==7)
    {
     value=true;
     break;
    }
   }
  }
  else 
   value=false;
}
 if(value)
   cout<<"Boom";
 else
   cout<<"There is no 7 in the array";
}
  