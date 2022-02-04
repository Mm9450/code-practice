#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0 ;i<n;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    cout<<arr[k-1]<<endl;
}