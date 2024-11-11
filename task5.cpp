#include<iostream>
using namespace std;
main()
{
 string arr[4];
 string value;
 for(int i=0; i<4; i++)
{
 cout<<"Enter array elements: ";
 cin>>arr[i];
} 
for(int j=0; j<4; j++)
 {
  for(int k=0; k<j; k++)
  {
   if(arr[j]==arr[k])
   {
    value="True";
   }
   else
    value="False";
  }
 }
 cout<<value;
}
 
 