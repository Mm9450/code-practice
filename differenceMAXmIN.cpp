#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<max-min<<endl;


    


}