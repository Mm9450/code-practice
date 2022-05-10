#include<iostream>
using namespace std;
int secondlargest(int arr[], int n){
    if(n<2)
    return -1;
    int large = INT_MIN;
    int secondlarge = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>large){
            secondlarge = large;
            large = arr[i];
        }
        else if(arr[i]>secondlarge && arr[i]!=large){
            secondlarge=arr[i];
        }


        
    }
    return secondlarge;

}
int secondsmallest(int arr[],int n){
    if(n<2)
    return -1;
    int small = INT_MAX;
    int secondsmall = INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<small){
            secondsmall=small;
            small = arr[i];
        }
        else if(arr[i]<secondsmall&& arr[i]!= small){
            secondsmall = arr[i];
        }
    }
    return secondsmall;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }
    int secondlarge = secondlargest(arr, n);
    int secondsmall = secondsmallest(arr, n);
    cout<<"The second largest element is"<<" "<<secondlarge<<endl;
    cout<<"The second smallest element is"<<" "<<secondsmall<<endl;
}