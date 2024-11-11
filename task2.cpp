#include<iostream>
using namespace std;
main()
{
 string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
 string name;
 float discount;
 cout<<"Enter a movie name: ";
 cin>>name;
 if((name=="Gladiator")||(name=="StarWars")||(name=="Terminator")||(name=="TakingLives")||(name=="TombRider"))
 {
  for(int i=0; i<5; i++)
  {
   if(name==movies[i])
   {
    if(i%2==0)
   {
    discount=500-(500*10/100);
    cout<<"Discount: "<<discount;
   }
    else
    {
     discount=500*5/100;
     cout<<"Discount: "<<discount;
    }
   }
  }
 }
 else
  cout<<"Movie not Found";
}