#include<iostream>
using namespace std;
int main(){
    char ch;
    int k;
    cin>>ch;
    cin>>k;
    k=k%26;
    if(ch>='a'&& ch<='z')
    {
        if(ch+k>'z')
        ch=ch+k-26;
        else
        ch=ch + k;
    }
    if(ch>='A'&& ch<='Z'){
        if(ch+k >'Z')
        ch=ch+k-26;
        else
        ch=ch+k;
    }
    cout<<ch<<endl;
    return 0;
}