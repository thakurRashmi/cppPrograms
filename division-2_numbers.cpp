#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers a and b respectively\n";
    cin>>a>>b;
    int quotient,remain;
    quotient =a/b;
    remain=a%b;
    cout<<"quotient="<<quotient<<endl;
    cout<<"remainder="<<remain<<endl;
    
    return 0;
}
