#include<iostream>
using namespace std;

void alternate( int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    

    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};
    alternate(even,8);
    printArray(even,8);
    cout<<endl;
    alternate(odd,5);

    
    printArray(odd,5);
    
}