#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tax=0;
    for(int i=0; i<n;i++){
        if(arr[i]>1000)
        tax=tax+(arr[i]*0.1);
    }
    cout<<tax<<endl;
}