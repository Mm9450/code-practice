#include<iostream>
using namespace std;

void numCount(int arr[],int n){
    int even_count = 0;
    int odd_count = 0;

    for(int i=0; i<n;i++){
        if(arr[i]&1==1){
            odd_count++;
            cout<<"number of odd is"<<odd_count<<endl;
        }
        
        else{
            even_count++;
           cout<<"number of even is"<<even_count<<endl;
        }
        
    }

}


int main(){

    int brr[8]={1,2,3,4,5,67,8,3};

    numCount(brr,8);

}

