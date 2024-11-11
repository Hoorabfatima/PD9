#include<iostream>
using namespace std;
main()
{
  string s1;
  string s2;
  int i,j,count;
  cout<<"Enter string 1: ";
  cin>>s1;
  cout<<"Enter string 2: ";
  cin>>s2;
  for(i=0; s1[i]!='\0'; i++)
  {
   for(j=0;s2[j]!='\0';j++)
  {
   if(s1[i]==s2[j])
   {
   count++;
   s2[j]=238;
   break;
    }
   }
  }
  cout<<count;
}