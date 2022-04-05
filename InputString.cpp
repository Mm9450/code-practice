#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    string str1;
    getline(cin, str);
    getline(cin,str1);
    for(int i=0; i<str.length();i++){
        if(str[i]!=',' && str[i]!=' '){
            str[i] = str[i]+5;
        }
    }
     for(int i=0; i<str1.length();i++){
        if(str1[i]!=',' && str1[i]!=' '){
            str1[i] = str1[i]-5;
        }
    }
    cout<<str<<endl;
    cout<<str1<<endl;
}