#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0; i<str.length();i++){
        if(str[i]=='x'||str[i]=='y'||str[i]=='z'){
            str[i]= str[i]+3-26;
        }
        else{
            str[i]= str[i] + 3;
        }
    }
    cout<<str;
}