#include<iostream>
#include<conio.h>
using namespace std ;

int main()
{
    int A[10][10] , B[10][10] , C[10][10] , r1 , r2 , c1 , c2 , i , j , k , sum=0 ;

        cout<<"  Enter Rows Column For Matrix A : "<<endl;
        cout<<"  Row 1    : ";
        cin>>r1;
        cout<<"  Column 1 : ";
        cin>>c1;

        cout<<"\n  Enter Rows Column For Matrix B : "<<endl;
        cout<<"  Row 2    : ";
        cin>>r2;
        cout<<"  Column 2 : ";
        cin>>c2;

    while (c1!=r2)
    {
        cout<<"\n  Error  || Column Of Matrix A is not Equal to Row of Matrix B \n" ;
        cout<<"\n  Enter Rows Column For Matrix A : "<<endl;
        cout<<"  Row 1    : ";
        cin>>r1;
        cout<<"  Column 1 : ";
        cin>>c1;

        cout<<"\n  Enter Rows Column For Matrix B : "<<endl;
        cout<<"  ROw 2    : ";
        cin>>r2;
        cout<<"  Column 2 : ";
        cin>>c2;

    }

    // Input of Matrix A
    cout<<"\n  Enter The Elements Of A "<<endl;
    cout<<"\n";

    for(i=0 ; i<r1 ; i++)
    {
        for( j=0 ; j<c1 ; j++)
        {
            cout<<"  A["<<i<<"]["<<j<<"] = " ;
            cin>>A[i][j];
        }
            cout<<"\n";
    }
    // Input of Matrix B
      cout<<"\n  Enter The Elements Of B "<<endl;
      cout<<"\n";

    for(i=0 ; i<r2 ; i++)
    {
        for( j=0 ; j<c2 ; j++)
        {
            cout<<"  B["<<i<<"]["<<j<<"] = " ;
            cin>>B[i][j];
        }
            cout<<"\n";
    }

       //printing Matrix A
       cout<<"  ||  Matrix A ||\n"<<endl;

    for(i=0 ; i<r1 ; i++)
    {
        for( j=0 ; j<c1 ; j++)
        {
            cout<<"  "<<A[i][j] ;
        }
    }

       //printing Matrix A
       cout<<"\n\n  ||  Matrix B ||\n"<<endl;

    for(i=0 ; i<r2 ; i++)
    {
        for( j=0 ; j<c2 ; j++)
        {
            cout<<"  "<<B[i][j] ;
        }
    }
         //Multiplication of Matrix A & B

    for(i=0 ; i<r1 ; i++)
    {
        for( j=0 ; j<c2 ; j++)
        {
          for( k=0 ; k<c1 ; k++)
           {
              sum = 0 ;
              sum = sum + A[i][k]*B[k][j];

           }
               C[i][j] = sum ;
               sum = 0 ;
        }
    }

       //printing Matrix A
       cout<<"\n\n  ||  Matrix C ( Multiplication Of A & B ) ||\n"<<endl;

    for(i=0 ; i<r2 ; i++)
    {
        for( j=0 ; j<c2 ; j++)
        {
            cout<<"  "<<C[i][j];
        }
    }
    getch();
}
