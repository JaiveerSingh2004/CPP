#include<iostream>
#include<cmath>
using namespace std;
 
void Cube(int num)
{
    cout<<pow(num, 3);
}

void Reverse(int num)
{
    int ans = 0, mul = 1;
    while(num)
    {
        int rem = num % 10;
        ans = ans*10 + rem;
        num /=10;
    }
    cout<<ans;
}

void Swapping(int a, int b, int c)
{
    /*
    a = 3       a = 5         value of a --> b
    b = 4       b = 3         value of b --> c
    c = 5       c = 4         value of c --> a
    */
    int tempB = b;
    int tempC = c;
    b = a;
    c = tempB;
    a = tempC;

    cout<<a<<" "<<b<<" "<<c;
}   

void Swapp(int a, int b)
{
    swap(a,b);
    cout<<a<<" "<<b;
}

int fact(int a)
{
    int fact = 1;
    for(int i = 1; i<=a; i++)
    {
        fact *= i;
    }
    return fact;
}
void Comb(int n, int r)
{
    int ans;
    ans = fact(n)/(fact(r) * (fact(n-r)));

    cout<<ans; 
}

int main()
{
/*
// Q1: Find the cube of a number using Function.
    int num;
    cout<<"Enter: "; cin>>num;

    Cube(num);
*/

/*
// Q2: Reverse a number n using Function, Constraints: -5000<=n<=5000
    int num;
    cout<<"Enter: "; cin>>num;

    Reverse(num); 
*/

/*
// Q3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
    int a,b,c;
    cout<<"Enter the values of a,b,c (With Spaces): ";
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"Before Swapping: ";
    cout<<a<<" "<<b<<" "<<c;
    cout<<endl;
    cout<<"After Swapping: ";
    Swapping(a,b,c);
*/

/*
// Q4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.
    int a, b;

    cout<<"Enter the values of a,b (With Spaces): ";
    cin>>a;
    cin>>b;

    cout<<"Before Swapping: ";
    cout<<a<<" "<<b;

    cout<<endl;

    cout<<"After Swapping: ";
    Swapp(a,b);
*/

/*
// Q6: Given two numbers n, r. Find nCr (Combination). Use Function here.
    int n, r;
    cout<<"Enter value of n and r: ";
    cin>>n;
    cin>>r;

    Comb(n,r);

*/
 return 0;
}