#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int feet=0;
    for(int i=0; i<n; i++){
        feet += arr[i]/12;
    }
    cout<<feet<<endl;
}