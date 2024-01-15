#include<iostream>
using namespace std;
 
int main()
{
    int row, col;
/*
    First Pattern:

    4 4 4 4 4 4
    4 4 4 4 4 4
    4 4 4 4 4 4  
    4 4 4 4 4 4
    4 4 4 4 4 4 
*/
/*
    for(row = 1; row<=5; row++)
    {
        for(col=1;col<=6; col++)
        {
            cout<<"4 ";
        }
        cout<<endl;
    }
*/

/*
Second Pattern:
   
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
*/
/*
    for(row=1; row<=6; row++)
    {   
        for(col=1; col<=5; col++)
        {
            int colSq = col*col;
            cout<<colSq<<" ";
        }
        cout<<endl;
    }
*/

/*
Third Pattern:
  
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
*/
/*
    for(row=1; row<=5; row++)
    {   
        for(col=1; col<=6; col++)
        {
            int colCu = col * col * col;
            cout<<colCu<<" "; 
        }
        cout<<endl;
    }
*/

/*
Fourth Pattern:

    F G H I J K  
    F G H I J K
    F G H I J K
    F G H I J K
    F G H I J K
*/
/*
    for(row = 1; row<=5; row++)
    {   
        for(char col = 'F'; col<='K'; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

 return 0;
}