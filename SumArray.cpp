#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n=5;
    vector<int>arr={1,3,4,5,8};
    int sum =0;
    for(int i=0;i<n;i++){
        sum+= arr[i];

    }
    cout<<sum<<" "<<endl;


}