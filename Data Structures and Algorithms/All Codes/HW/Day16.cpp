#include<iostream>
using namespace std;
 
int main()
{
    int num, i;
    int mul = 1;
    int rem;
    int ans = 0;
    cout<<"Enter the number: ";cin>>num;

/*
// Q1: Write a program to convert binary numbers to decimal numbers using a for loop.
    for(i=num; i>0; i/=10)
    {
        rem = i % 10;
        ans = rem * mul + ans;
        mul *= 2;
    }

    cout<<ans;
*/ 

/*
// Q2: Write a program to convert decimal numbers to binary numbers using a for loop.

    for(i=num; i>0; i/=2)
    {
        rem = i % 2;
        ans += rem * mul;
        mul *= 10;
    }
    
    cout<<ans;
*/

/*
// Q3: Write a program to convert binary to Octal numbers.
    while(num>0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 2;
    }

    cout<<ans<<endl;

    int bin = ans;
    int oct = 0;
    mul = 1;

    while(bin>0)
    {
        rem = bin % 8;
        bin /=8;
        oct += rem * mul;
        mul *= 10;
    }
    cout<<oct;
*/

/*
// Octal to Binary
    while(num>0)
    {
        rem = num % 10;
        ans += rem * mul;
        mul *= 8;
        num /= 10; 
    }
    int dec = ans;
    int bin = 0;
    mul = 1;
    while(dec>0)
    {
        rem = dec % 2;
        bin += rem * mul;
        mul *= 10;
        dec /= 2;  
    }
    cout<<bin;
*/
 return 0;
}