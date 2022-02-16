#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d;
    int sum=0;
    while(n>0){
        d = d%10;
        sum = sum + (d*d*d);
        n=n/10;

    }
    if(n==sum){
        cout<<"It is a armstrong number"<<endl;
    }
    else{
        cout<<"not a armstrong number"<<endl;
    }
    return 0;
}
    