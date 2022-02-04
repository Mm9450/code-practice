#include<iostream>
using namespace std;
int main(){
    double h1,b1,h2,b2,a1,a2;
    cin>>h1>>b1>>h2>>b2;
    a1=(h1*b1)/2;
    a2=(h2*b2)/2;
    if(a1>a2)
    cout<<a1<<endl;
    else
    cout<<a2<<endl;
}