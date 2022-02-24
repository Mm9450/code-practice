#include<iostream>
#include<vector>
using namespace std;

void rotateArray(int arr[], int n, int k){
    int temp[100];
    for(int i=0;i<n;i++){
        temp[i+k%n]=arr[i];
    }
}

void printArray(int arr[], int n,int k){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int n=7;
    int k=3;

    rotateArray(arr,n,k);

    printArray(arr,n,k);
}