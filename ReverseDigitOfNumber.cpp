#include<iostream>
using namespace std;
int main(){
    int n,d,rev=0;
    cin>>n;
    while(n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    cout<<"Reverse of the given number is ="<< rev<<endl;
}