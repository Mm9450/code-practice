#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int gcd;
    int lcm;

    for(int i=1 ; i<=min(a,b); i++){
        if(a % i==0 && b % i == 0){
            gcd=i;

        }
    }
    lcm = a*b/gcd;

    cout<<"LCM of two number is "<< lcm;
}