#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string ans;
    for(int i=0; i<str.length();i++){
        if(str[i]!='(' && str[i]!=')'){
            ans.push_back(str[i]);
        }
    }
    cout<<ans;

}
