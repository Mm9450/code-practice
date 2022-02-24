#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    int k,count=0;
    cin>>k;
    while(n){
        if(k==n%10)
        count++;
        n=n/10;
    }
    cout<<count <<endl;
}