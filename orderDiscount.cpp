#include<iostream>
using namespace std;
int main(){
    int n,dis, count =0;
    cin>>n>>dis;
    
    int order[100];
    for(int i=0 ; i<n; i++){
        cin>>order[i];
        if(order[i]>0 && dis%order[i]==0)
        count++;

    }
    cout<<count<<endl;
}