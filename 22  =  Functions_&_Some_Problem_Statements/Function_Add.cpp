#include<iostream>
using namespace std;


int  add( int a, int b)
{
  int result = a+b;
   return result;
} 

int main()
{
  int a,b;

  cout<<"Enter First Number :";
    cin>>a;

    cout<<"Enter Second Number:";
    cin>> b;

    int sum= add(a,b);

    cout<< "The Sum oF Two Number Is:" << sum  << endl;
}