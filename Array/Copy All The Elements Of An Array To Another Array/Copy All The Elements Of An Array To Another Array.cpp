#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int i , array1[5]={10,20,30,40,50},array2[5] ;

   cout<<"\n  Array 1 : ";


   for(i=0 ; i<5  ; i++)
   {
     cout<<array1[i]<<" ";
   }

    //Copy All The Elements from Array1 To Array2
   for(i=0 ; i<5  ; i++)
   {
     array2[i] = array1[i] ;
   }

    cout<<endl<<"\n  Array 2 : ";


   for(i=0 ; i<5  ; i++)
   {
     cout<<array2[i]<<" ";
   }

    getch();

}

