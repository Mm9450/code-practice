#include<iostream>
using namespace std;
int main(){
    char s[1000],r[1000];
    cin>>s>>r;
    for(int i=0; s[i]!='\0';i++){
        if(s[i]!=r[i]){
            cout<<s[i];
            break;
        }
        if(s[i]=='\0')
    cout<<"NA";
    }
    
}