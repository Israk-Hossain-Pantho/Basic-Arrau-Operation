#include<iostream>
#include<conio.h>
using namespace std ;

 int main()
{
   int  i , j , row , col , A[10][10] , T[10][10] ;

     cout << "  Number Of Rows & Columns  "<<endl;
     cout << "\n  Number Of Rows    : ";
     cin>>row ;
     cout << "  Number Of Columns : ";
     cin>>col ;

     cout<<"\n  Enter The Elements of Matrix A : "<<endl;
     cout<<"\n";

    //input matrix A
   for( i=0 ; i<row ; i++ )
   {
       for( j=0 ; j<col ; j++ )
       {
           cout<<"  A["<<i<<"]["<<j<<"] = ";
           cin>>A[i][j];
       }
           cout<<endl;
  }


            //output Matrix A
           cout<<"\n || The Matrix A ||"<<endl ;
           cout<<"\n";

  for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
           cout<<"  " <<A[i][j]<<"  ";
       }
           cout<<endl;
  }

         // Transpose Matrix A
           cout<<"\n || The Matrix T ||  ( Transpose Matrix)"<<endl ;
           cout<<"\n";

  for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
         T[i][j] = A[j][i] ;
       }
           cout<<endl;
  }
    // printing maatrix c
  for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
         cout<<"  " <<T[i][j]<<"  " ;
       }
           cout<<endl;
  }

  getch();

}
