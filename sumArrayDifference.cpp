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
    int oddSum=0,evenSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
           oddSum+=arr[i];
        }
        else {
            evenSum+=arr[i];
        }
        
    }
    cout<<oddSum-evenSum<<endl;
    

   
}