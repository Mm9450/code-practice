#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0,t;
    for(int i=0;i<n-1;i++){
        t=arr[i]-arr[i+1];
        if(t<0)
        t=-t;
        sum+=t;
    }
    cout<<sum<<endl;

}