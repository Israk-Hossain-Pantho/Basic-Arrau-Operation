#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int  n , a[30] , i ;

   cout<<"\n  Enter The Number Of Terms : ";
   cin>>n;

   a[0] = 0;
   a[1] = 1;

   for( i=2 ; i<n ; i++)
    {
       a[i] = a[i-1] + a[i-2] ;
    }

       cout<<"\n  Fibonacci Series : ";

   for( i=0 ; i<n ; i++)
    {
       cout<<a[i]<<" ";
    }


  getch();

}
