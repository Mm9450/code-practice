#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
        cout<<arr[i];

        
    }
}
