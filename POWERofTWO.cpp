#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n){
        c+=n&1;
        n>>=1;
        
        }
        if(c==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    
}
    
      