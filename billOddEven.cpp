#include<iostream>
using namespace std;
int main(){
    long int bill;
    cin>>bill;
    int oddsum=0, evensum=0;
    while(bill!=0){
    if(bill%10%2!=0)
    oddsum=oddsum+bill%10;
    else
    evensum=evensum+bill%10;
    bill=bill/10;
    }
    if(oddsum==0)
    oddsum=1;
    else if(evensum==0)
    evensum=1;

    cout<<oddsum*evensum<<endl;
}