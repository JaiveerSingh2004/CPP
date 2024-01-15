#include<iostream>
using namespace std;
 
int main()
{
    int row, col, r;
    cout<<"Enter number: "; cin>>r;

/*
Q1:
        *
       * *
      * * *
     * * * *
    * * * * *
*/ 
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
*/

/*
Q2:
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=2*row-1; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
Q3:
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
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
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        for(col=row-1; col>=1; col--)
        {
            char name = 'A' + (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
*/

/*
Q4:
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=r; row>=1; row--)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<" ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
*/
 return 0;
}