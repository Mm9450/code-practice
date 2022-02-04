#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int c=0;
    int price[100];
    for(int i=0;i<n;i++){
        cin>>price[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(price[i]-price[j]==k ||price[j]-price[i]==k)
            c++;
        }
    }
    cout<<c<<endl;
}