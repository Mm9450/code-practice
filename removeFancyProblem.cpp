#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    
    string ans;
    for(int i=0; i<str1.length();i++){
        for(int j=0; j<str2.length();j++){

    
        if(str1[i]!=str2[j]){
            ans.push_back(str1[i]);
        }
        }

    }
    cout<<ans;
}