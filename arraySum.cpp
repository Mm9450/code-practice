#include<iostream>
using namespace std;

int getsum(int ele[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum =sum +ele[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;

    int ele[100];
    for(int i=0 ;i<size;i++){
        cin>>ele[i];
    }
    
    cout<<"Sum of element is"<<" "<<getsum(ele,size)<<endl;
}