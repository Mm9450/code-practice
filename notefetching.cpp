#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"Enter the amount"<<endl;
    cin>>amt;

    int note;
    cout<<"amount of note want to fetch"<<endl;
    cin>>note;

    switch(note){
        case 100:cout<<(amt/100)<<endl;
                   break;
        case 50: cout<<(amt/50)<<endl;
                   break;
        case 10:cout<<(amt/10)<<endl;
                  break;
        case 1:cout<<(amt/1)<<endl;
                 break;
        default:cout<<"please enter valid note"<<endl;                     
    }
}