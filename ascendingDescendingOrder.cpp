#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0 ;i<n;i++) {
        cin>>arr[i];

    }
    for(int i=0; i<n ;i++){
        for(int j= i+1; j<i; j++){
        if(arr[i]<arr[j])
        swap(arr[i],arr[j]);
    }}
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}