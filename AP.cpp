#include<iostream>
using namespace std;

int ap(int num){
    int ans = 3*num + 7;
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int answer = ap(n);
    cout<<"answer is"<<answer<<endl;
}