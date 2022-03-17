#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    int m=n%10;
    while(n){
        if(m<n%10)
        m=n%10;
        n=n/10;
    }
    cout<<m<<endl;
}