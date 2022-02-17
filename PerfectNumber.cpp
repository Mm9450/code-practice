#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n-1; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum == n){
        cout<<"Number is a perfect number "<<endl;
    }
    else{
        cout<<"Number is not a perfect number "<<endl;
    }
    return 0;
}