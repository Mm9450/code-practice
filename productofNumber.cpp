#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i*i<n;i++){
        if(n%i==0){
            count++;
        }



        
    }
    cout<<count;
}