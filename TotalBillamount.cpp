#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0, total_bill=0, tax_amount=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    if(sum>1000){
        tax_amount=(sum-1000)*0.1;
    }
    total_bill= total_bill + tax_amount;
    cout<<total_bill-400<<endl;
}