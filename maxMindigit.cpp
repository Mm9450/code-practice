#include<iostream>
using namespace std;

void MinMAX(int n){
    int d, mini=INT_MAX, maxi= INT_MIN;
    while(n!=0){
        d = d%10;
        mini = min(mini,d);
        maxi = max(maxi,d);
        n = n/10;
    }
    cout<<mini<<endl;
    cout<<maxi<<endl;
}


int main(){
    int n = 687;
    
    MinMAX(n);
    return 0;
}