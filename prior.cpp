#include<iostream>
using namespace std;

 int getEle(int arr[], int n){
    int count=1;
    
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            
            count++;
        }
        
    }
    return count;
}

int main(){
     int arr[5]={3,4,3,6,2};
      int ans= getEle(arr,5);
      cout<<"number of element "<<ans<<endl;

}