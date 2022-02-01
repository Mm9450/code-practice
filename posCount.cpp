#include<iostream>
using namespace std;

int posCount(int arr[],int n){
    int pos_count=0;
    for(int i=0; i<n;i++){
        if(arr[i]>0)
        pos_count++;
    }
    return pos_count;
}


int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"number of positive sales is  "<< posCount(arr,n)<<endl;
}