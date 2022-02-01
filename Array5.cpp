#include<iostream>
using namespace std;

void countNum(int arr[],int n){
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j])
            count++;
            
        }
        cout<<arr[i]<<" "<<count<<endl;
        
    }
    
    
}

int main(){

   int arr[5]={4,3,3,4,4};

   countNum(arr,5);
}