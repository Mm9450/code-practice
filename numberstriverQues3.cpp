#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag =0;

    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = 1;
            
        }
       
    }
    if(flag ==0){
        cout<<"it is a prime number"<<endl;
    }
    else {
        cout<<"it is not prime number"<<endl;
    }
}