#include<iostream>
using namespace std;

int divv( int a, int b)
{
    int result = a*b;
    return result;
}


int main()
{
    int a,b;

    cout<<" Enter THe Value Of A:";
    cin>>a;

    cout<<" Enter The Value Of B:";
    cin>> b;

    int mult= divv(a,b);

    cout<<" THE Multiplication Of Two Number is "<< mult << endl;
}