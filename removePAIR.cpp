#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string ans;

    for(int i=0; i<str.length();i=i+2){
        if(str[i]>str[i+1]){
        ans.push_back(str[i]);
        }
       
    
    else
    {
        ans.push_back(str[i+1]);
    }}
    
    cout<<ans;
}