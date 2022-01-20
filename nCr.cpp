#include<iostream>
using namespace std;

int fact(int num){

    int factorial=1;
    for (int i=1;i<=num;i++){
        factorial = factorial*i;
        
    }
    return factorial;
}

int nCr(int n,int r){

    int d= fact(n)/fact(r)*fact(n-r);

    return d;
}

int main(){
    int n,r;
    cin>>n>>r;

    int answer= nCr(n,r);
    cout<<answer<<endl;
}