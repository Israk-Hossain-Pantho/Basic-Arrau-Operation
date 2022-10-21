#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
    int marks[5] ;

        //printing input
    for(int i=0 ; i<5 ; i++)
    {
        cout<< "  Enter The Marks of Student "<<i<<" : ";
        cin >> marks[i];
    }

        //printing output
        cout<<"\n  Marks are : " ;
     for(int i=0 ; i<=4 ; i++ )
     {
       cout<<marks[i]<<"  " ;
     }

    getch();

}
