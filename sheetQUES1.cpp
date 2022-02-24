#include<iostream>
using namespace std;
int main(){
    long int n;
    cin>>n;
    int arr[10]={0};
    while(n){
        arr[n%10]++;
        n=n/10;
    }
    int i, sk=0;
    for(i=0;i<10; i++){
        if(arr[i]>1)
        sk++;
    }
    if(arr[i]==0){
    sk=-1;
    }
    cout<<sk<<endl;
}
