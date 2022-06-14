#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string ans;
    for(int i=0; i<str.length();i++){
        if((str[i]>= 65 && str[i]<=90)||(str[i]>=97 && str[i] <=122)){
            ans.push_back(str[i]);

        }
    }
    cout<<ans;
}