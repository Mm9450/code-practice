#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int space=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
        space=space+1;
    }
    cout<<space<<endl;
}