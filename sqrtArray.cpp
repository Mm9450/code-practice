#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d,c=0;
    for(int i=0;i<n;i++){
       
        for(d=2;d*d<arr[i];d++){
            if(d*d==arr[i])
            c++;
        }
    


    }
    cout<<c;
  
}