#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n ;i++){
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n;i++){
        if(arr[i]%2!=0)
        cout<<arr[i]<<" ";
    }
}