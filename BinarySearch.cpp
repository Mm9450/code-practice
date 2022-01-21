#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid= start + (end-start)/2;
     
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid= start +(end-start)/2;
    } 
    return -1;
}

int main(){

    int even[6]={4,5,7,8,9,12};
    int odd[5]={2,3,4,5,6};

    int evenindex=binarySearch(even,6,12);
    cout<<"index number is "<<evenindex<<endl;
    int oddindex=binarySearch(odd,5,3);
    cout<<"index number is "<<oddindex<<endl;
}