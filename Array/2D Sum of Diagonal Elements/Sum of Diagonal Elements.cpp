#include<iostream>
#include<conio.h>
using namespace std ;

 int main()
{
   int i , j , row , col , sum=0 , A[3][3] , B[3][3] ;

     cout<<"\n  Enter The Number Of Row & Columns For Matrix A : "<<endl;
     cout<<"  The Number Of Row : " ;
     cin>>row;
     cout<<"  The Number Of Columns : " ;
     cin>>col;
     cout<<"\n";

    //input matrix A
   for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
           cout<<"  A["<<i<<"]["<<j<<"] = ";
           cin>>A[i][j];
       }
           cout<<endl;
  }

           cout<<"\n || The Matrix A ||"<<endl ;
           cout<<"\n";

   //output Matrix A
  for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
           cout<<"  " <<A[i][j]<<"  ";
       }
           cout<<endl;
  }
    //Sum of diagonal elements of matrix A
    cout<<"\n  Diagonal Elements of Matrix A = ";

    for( i=0 ; i<row ; i++)
    {
       for( j=0 ; j<col ; j++)
       {
         if( i==j & i<=row-1)
         {
             cout<<A[i][j] <<" + ";
         }

       }
    }
     cout<<endl ;

    // Output Sum of diagonal elements of matrix A
  for( i=0 ; i<row ; i++)
   {
       for( j=0 ; j<col ; j++)
       {
         if( i==j)
         {
             sum = sum + A[i][j] ;
         }
       }
           cout<<endl;
  }
 cout<<"  Sum of Diagonal Elements = "<<sum;
  getch();

}
