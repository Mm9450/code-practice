#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0; i<str.length();i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            str = str.substr(0,i) + str.substr(i+1);
        }
    }
    cout<<str<<endl;
}