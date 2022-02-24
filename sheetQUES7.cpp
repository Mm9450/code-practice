#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0,sroot;
    for(int i=0; i<n;i++){

    
    for( sroot=2;sroot*sroot<arr[i]; sroot++){
        if(sroot*sroot==arr[i])
        c++;
    }
    }
    cout<<c<<endl;
}