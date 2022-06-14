#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string ans;
    for(int i=0; i<str.length();i++){
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'){
        ans.push_back(str[i]);
        }
        
    }
    cout<<ans;



}