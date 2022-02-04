#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[100];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    sum=arr[n-1]+arr[n-2];
    cout<<sum<<endl;

}