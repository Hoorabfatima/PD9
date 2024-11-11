#include<iostream>
using namespace std;
main()
{
 string name;
 float quantity,total;
 string fruit[4]={"peach","apple","guava","watermelon"};
 float price[4]={60,70,40,30};
 cout<<"Enter the name of fruit: ";
 cin>>name;
 cout<<"Enter quantity of fruit: ";
 cin>>quantity;
 if(name=="peach"||name=="Peach"||name=="guava"||name=="Guava"||name=="watermelon"||name=="Watermelon")
 {
  for(int i=0; i<4; i++)
  {
    if(name==fruit[i])
   { 
    total=price[i]*quantity;
    cout<<"Total bill: "<<total;
   }
  }
 }
 else
{
 cout<<"Fruit not found";
}
}
 
 
 