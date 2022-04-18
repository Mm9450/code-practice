#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[i+1];
            
                arr[i+1]=temp;
            }
        }
        }

        int min=INT_MAX;
        for(int i=0;i<n-x;i++){
           int d = arr[i+x-1]-arr[i];
            if(d<min)
            min=d;
        }
        cout<<min<<endl;
    
}