#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[]={2,3,4,5,6};
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double average;
    average= sum/n;
    cout<<average<<endl;
}