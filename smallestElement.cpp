#include<iostream>
using namespace std;
int SmallestNum(int arr[],int n){
    int min = INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = SmallestNum(arr,n);

    cout<<ans<<endl;
}