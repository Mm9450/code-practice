#include<iostream>
using namespace std;

int getMax(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[100],brr[100],crr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i]>>brr[i]>>crr[i];
          getMax(arr,n);
    getMax(brr,n);
    getMax(crr,n);
    cout<<getMax(arr,n)<<getMax(brr,n)<<getMax(crr,n);
    }
   return 0;
}