#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    int r1,r2;
    cin>>r1>>r2;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0)
        t=-arr[i];
        else
        t=arr[i];
        if(t>=r1&&t<=r2)
        cout<<arr[i]<<" ";
    }
    
    

    
}