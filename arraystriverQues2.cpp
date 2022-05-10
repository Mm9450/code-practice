#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int max = INT_MIN;
    for(int i=0; i<n ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int large = largestElement(arr,n);

    cout<<"The largest element is"<<" "<<large<<endl;

    }