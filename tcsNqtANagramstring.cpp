#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0; i<str1.length();i++){
        if(str1[i]!=str2[i]){
            cout<<"false"<<endl;
            break;
        }
        cout<<"True"<<endl;
        break;
    }
}