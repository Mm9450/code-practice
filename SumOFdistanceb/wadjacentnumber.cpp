#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int difference;
    int sum=0;
    for(int i=0;i<n-1;i++){
        difference= abs(arr[i]-arr[i+1]);
        sum+=difference;
    }
    cout<<sum<<endl;
}

