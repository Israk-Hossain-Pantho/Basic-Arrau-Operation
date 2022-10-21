#include<iostream>
#include<conio.h>
using namespace std ;

 int main()
{
   int row , col , A[3][3] , B[3][3] ;

     cout<<"\n  Enter The Elements of Matrix A : "<<endl;
     cout<<"\n";

    //input matrix A
   for( row=0 ; row<3 ; row++)
   {
       for( col=0 ; col<3 ; col++)
       {
           cout<<"  A["<<row<<"]["<<col<<"] = ";
           cin>>A[row][col];
       }
           cout<<endl;
   }

           //input matrix B
           cout<<"\n  Enter The Elements of Matrix B : "<<endl;
           cout<<"\n";

   for( row=0 ; row<3 ; row++)
   {
       for( col=0 ; col<3 ; col++)
       {
           cout<<"  B["<<row<<"]["<<col<<"] = ";
           cin>>B[row][col];
       }
           cout<<endl;
  }

           //output Matrix A
           cout<<"\n || The Matrix A ||"<<endl ;
           cout<<"\n";

   for( row=0 ; row<3 ; row++)
     {
       for( col=0 ; col<3 ; col++)
       {
           cout<<"  " <<A[row][col]<<"  ";
       }
           cout<<endl;
     }
      
           cout<<"\n || The Matrix B ||"<<endl ;
           cout<<"\n";

      //output Matrix B
    for( row=0 ; row<3 ; row++)
     {
       for( col=0 ; col<3 ; col++)
       {
          cout<<"  " <<B[row][col]<<"  ";
       }
           cout<<endl;
  }

  getch();

}
