#include<iostream>
using namespace std;
 
int main()
{

    int row, col, r, c;

/*
Q1:
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
*/
/*
    for(row=1; row<=6; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q2: 
    A
    A B
    A B C
    A B C D
    A B C D E
*/
/*
    for(row=1; row<=5; row++)
    {
        for(char col='A'; col<='A' + (row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q3:
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15

*/
/*
    for(row=1; row<=6; row++)
    {
        for(col=10; col<=10 + (row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q4:
      A B C D
      A B C
      A B
      A
*/
/*
    for(row=1; row<=4; row++)
    {
        for(char col='A'; col<='A' + (4-row); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/
 return 0;
}