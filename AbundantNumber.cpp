#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n-1; i++){
        if(n % i == 0){
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"number is abundant number "<<endl;
    }
    else{
        cout<<"number is not a abundant number "<<endl;
    }
}