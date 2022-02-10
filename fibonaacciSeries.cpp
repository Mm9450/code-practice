#include<iostream>
using namespace std;
int main(){
    int n=5;
    if(n==0){
        cout<< 0;

    }
    else if(n==1){
        cout<<"0"<<" "<<"1";
    }
    else{
        int arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        for(int i=0;i<=n;i++){
            cout<<arr[i];
        }
    }
}