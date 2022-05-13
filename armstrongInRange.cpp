#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    cout<<"armstrong numbers between"<<a<<"and"<<b<<"are:"<<endl;

    for(int i = a; i<=b; i++){
        int count =0;
        int temp = i;
        while(temp!=0){
            ++count;
            temp = temp/10;
        }
        int sumofpower =0;
        temp = i;
        while(temp!=0){
            int digit = temp%10;
            sumofpower += pow(digit,count);
            temp = temp/10;
        }
        if(sumofpower==temp){
            cout<<i<<",";
        }

    }
    return 0;
}