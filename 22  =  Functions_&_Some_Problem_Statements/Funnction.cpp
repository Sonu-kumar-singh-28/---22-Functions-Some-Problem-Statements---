#include<iostream>
using namespace std;

void printname( int a)
{
    ++a;
    a++;
    cout<<" The Number Of Void Function Is:" <<a<< endl;
}

int main()
{
    int a=10;
    a++;
    ++a;
    cout<<" The Number Of Main Is :"<< a << endl;

    printname(a);
}
