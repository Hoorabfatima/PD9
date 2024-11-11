#include<iostream>
using namespace std;
int n,sum=0,i;
main()
{
  cout<<"Enter the number of colors: ";
  cin>>n; 
  string colors[n];
  for(i=0; i<n; i++)
 {
  cout<<"Enter string of colors: ";
  cin>>colors[i];
 }
  sum=n*2;
 for(i=0; i<n; i++)
{
 if(colors[i]!=colors[i+1])
  sum=sum+1;
}
 cout<<sum-1;
}

