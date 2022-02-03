#include<iostream>
using namespace std;

int main(){
    long int n;
    cin>>n;
    int k;
    cin>>k;
    int c=0;
    while(n){
        if(k==n%10)
        c++;
        n=n/10;
    }
    cout<<c<<endl;
}