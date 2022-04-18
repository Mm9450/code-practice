#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%10%2==0){
            evensum+=arr[i]%10;
        }
        else{
            oddsum+=arr[i]%10;
        }

    }
    cout<<oddsum-evensum<<endl;
}