#include<iostream>
using namespace std;

int max( int a, int b, int c)
{
    if( a>b && a>c)
    {
        cout<<"A is Greater Than B & C :"<< endl;
    }
    else if( b>a && b>c)
    {
        cout<<" B Is Greater Than A & C: "<< endl;
    }

    else 
    {
        cout<< " C Is Greater Than A &B:" <<endl;
    }

}



int main()
{
    int a,b,c;

    cout<<" Enter First Number :";
    cin>> a;

    cout<<" Enter Second Number :";
    cin>>b;

    cout<<" Enter Third Number :";
    cin>>c;

    int maximumnumber= max( a,b,c);

    cout<<" The Address  Maximum Number Is :"<< &maximumnumber << endl;
    
}