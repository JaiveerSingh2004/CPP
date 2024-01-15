#include<iostream>
using namespace std;
 
int main()
{
    int row, col, r;
    cout<<"Enter the number: "; cin>>r;

/*
Q1:

            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1   
*/
/*
    for(row=1; row<=r; row++)
    {   
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q2:
    
              A
            B B
          C C C
        D D D D
      E E E E E
      for n = 5
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  "; 
        }
        for(col=1; col<=row; col++)
        {   
            cout<<char('A'+(row-1))<<" ";
        }
        cout<<endl;
    }
*/

/*
Q3:
    
             5
           5 4
         5 4 3
       5 4 3 2 
     5 4 3 2 1
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=5; col>=5-(row-1); col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q4:

             E
           E D
         E D C
       E D C B
     E D C B A
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(char col='E'; col>='E' - (row-1); col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/
 return 0;
}