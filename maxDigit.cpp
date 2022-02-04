#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    int m=INT_MAX;
    
    while(n>0){
        int r= n%10;
        if(r<m)
        m=r;
        n=n/10;


       
    }
    cout<<m;
    return 0;
}