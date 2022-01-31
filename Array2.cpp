#include<iostream>
using namespace std;

int getMin(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
{    
            max=arr[i];
        }
    }
    return max;


}
int main(){
    int arr[5]={5,6,8,9,1};

    int ans= getMin(arr,5);
    cout<<"The maximum element is  "<<ans<<endl;
   
}