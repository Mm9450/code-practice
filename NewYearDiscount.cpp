#include<iostream>
using namespace std;
int main(){
   long int bill;

    int dis=0;
    cin>>bill;
    while(bill!=0){
        if(bill%10%2!=0)
        dis=dis+bill%10;
       bill=bill/10;
    }
    cout<<dis<<endl;

}