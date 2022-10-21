#include<iostream>
#include<conio.h>
using namespace std ;

 int main()
{
   int row , col , A[2][3] ;

     cout<<"\n  Enter The Elements of Matrix : "<<endl;


   for( row=0 ; row<2 ; row++)
   {
       for( col=0 ; col<3 ; col++)
       {
           cout<<"  A["<<row<<"]["<<col<<"] = ";
           cin>>A[row][col];
       }
  }

    cout<<"\n || The Matrix ||"<<endl ;
    cout<<"\n";

  for( row=0 ; row<2 ; row++)
   {
       for( col=0 ; col<3 ; col++)
       {
          cout<<"  " <<A[row][col]<<"  ";
       }
           cout<<endl;
  }

  getch();

}

