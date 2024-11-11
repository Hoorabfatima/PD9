#include<iostream>
using namespace std;
main()
{
  string word;
  int i;
  cout<<"Enter a string: ";
  cin>>word;
  for(i=0; word[i]!='\0'; i++)
  {
   word[i];
  }
  if(i%2==0)
  cout<<"True";
  if(i%2!=0)
  cout<<"False";
}