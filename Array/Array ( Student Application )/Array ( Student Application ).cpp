#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
    int n , sum=0 ;

    cout<< "  Enter The Number Of Student : " ;
    cin>>n ;

    int marks[n] ;

     for(int i=0 ; i<n ; i++ )
     {
       cout<<"\n  Enter The Marks Of Student "<<i+1<<" : " ;
       cin>>marks[i];
       sum = sum + marks[i] ;
     }

       cout<< "\n  Total Marks : "<<sum<<endl ;

       float avg = sum / n ;
       cout<< "\n  Average Marks : "<<avg ;

       int max = marks[0];
       int min = marks[0];

       for (int i=1 ; i<n ; i++)
       {
           if( max < marks[i])
           {
               max = marks[i];
           }
       }
       for (int i=1 ; i<n ; i++)
       {
           if( min > marks[i])
           {
               min = marks[i];
           }
       }

       cout<<"  Maximun Number : "<<max<<endl ;
       cout<<"  Minimun Number : "<<min<<endl ;
    getch();

}
