#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;
    cin>>a;

    int answer= isEven(a);
    if(isEven(a)==0){
        cout<<"answer is odd"<<endl;
    }
    else{
        cout<<"answer is even"<<endl;
    }
}