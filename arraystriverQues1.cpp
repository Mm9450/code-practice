#include<iostream>
using namespace std;
int SmallestElement(int arr[],int n){
    int mi = INT_MAX;
    for(int i=0; i<n; i++){
        if(mi>arr[i]){
            mi=arr[i];
        }
    }
    return mi;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int min = SmallestElement(arr,n);
    cout<<"The smallest number is"<<" "<<min<<endl;
}
//ctrl+l