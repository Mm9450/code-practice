#include<iostream>
using namespace std;

void getMedian(int arr[],int n){
    double median;
    if(n%2==0){
        median =((n/2)+(n+1/2))/2;
        cout<<median<<endl;

    }
    else{
        median = (n+1)/2;
        cout<<median<<endl;
    }
    

}


int main(){
    int arr[] ={4,7,1,2,5,6};
    int n=6;
    cout<<"The median of the array is = ";
     getMedian(arr,n);
     return 0;

}