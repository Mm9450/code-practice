#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<n;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    cout<< arr[n-1]+arr[n-2]<<endl;
}