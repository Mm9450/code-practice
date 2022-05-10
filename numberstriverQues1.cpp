#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dummy = n;
    
    int reverse = 0;
    while(n>0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    if(dummy==reverse){
        cout<<"the number is palindrome"<<endl;
    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }
    

}