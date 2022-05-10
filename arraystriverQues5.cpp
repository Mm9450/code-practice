#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<bool>visited(n,false);
    for(int i=0; i<n;i++){
        if(visited[i]==true)
        continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            visited[j]=true;
            count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
    
    
        
    }

