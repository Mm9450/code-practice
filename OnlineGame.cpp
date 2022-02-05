#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    while(f){
        if(f%10==0)
        c++;
        else
         break;
         f=f/10;

    }
    cout<<c;
}