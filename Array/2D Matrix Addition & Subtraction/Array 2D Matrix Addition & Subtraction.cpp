#include<iostream>
#include<conio.h>
using namespace std ;

 int main()
{
   int numberofRows , numberOfCols ,row , col , A[10][10] , B[10][10] , C[10][10] ;

     cout << "  Number Of Rows & Columns  "<<endl;
     cout << "\n  Number Of Rows    : ";
     cin>>numberofRows ;
     cout << "  Number Of Columns : ";
     cin>>numberOfCols ;

     cout<<"\n  Enter The Elements of Matrix A : "<<endl;
     cout<<"\n";

    //input matrix A
   for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
           cout<<"  A["<<row<<"]["<<col<<"] = ";
           cin>>A[row][col];
       }
           cout<<endl;
  }

           //input matrix B
           cout<<"\n  Enter The Elements of Matrix B : "<<endl;
           cout<<"\n";

   for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
           cout<<"  B["<<row<<"]["<<col<<"] = ";
           cin>>B[row][col];
       }
           cout<<endl;
  }

            //output Matrix A
           cout<<"\n || The Matrix A ||"<<endl ;
           cout<<"\n";

  for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
           cout<<"  " <<A[row][col]<<"  ";
       }
           cout<<endl;
  }

           //output Matrix B
           cout<<"\n || The Matrix B ||"<<endl ;
           cout<<"\n";

  for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
          cout<<"  " <<B[row][col]<<"  ";
       }
           cout<<endl;
  }
         //sum of  Matrix A & Matrix B
           cout<<"\n || The Matrix C ( Sum Of A & B )||"<<endl ;
           cout<<"\n";

  for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
         C[row][col] = A[row][col] + B[row][col];
       }
           cout<<endl;
  }
    // printing maatrix c
  for( row=0 ; row<numberofRows ; row++)
   {
       for( col=0 ; col<numberOfCols ; col++)
       {
         cout<<"  " <<C[row][col]<<"  " ;
       }
           cout<<endl;
  }

  getch();

}
