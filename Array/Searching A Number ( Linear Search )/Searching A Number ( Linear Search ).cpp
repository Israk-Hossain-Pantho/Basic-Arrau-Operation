#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int i , pos , num[]={10,20,30,40,50,60,70,80,90,100} ;
   int value ;

   cout<<"\n  Enter The Value You Want To Search : ";
   cin>>value ;

   for(i=0 ; i<10 ; i++)
   {
     if ( value == num[i])
     {
         pos = i +1 ;
         break ;
     }
   }

    cout<<"\n  Position Of The Number : "<<pos ;


    getch();

}
