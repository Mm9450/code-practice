#include<iostream>
using namespace std;

int main(){
     
    int v,w;
    cin>>v>>w;
    float x= ((v*4)-w)/2;

    if(w&1||w<2||w<=v){
        cout<<"INVALID INPUT GIVEN"<<endl;
        return 0;
    }

    cout<<"Two wheeler =   "<< x<<" "<< "Four Wheeler = "<<  v-x <<endl;


}