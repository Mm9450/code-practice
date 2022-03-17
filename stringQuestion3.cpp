#include<iostream>
#include<string.h>
using namespace std;
string removeSpaces(string str){
    for(int i=0; i<str.length();i++){
        if(str[i]==' '){
            str = str.substr(0,i) + str.substr(i+1);
            i--;
        }
    }
    return str;
}
int main(){
    string str = "taking u forward";
    cout<<"after removing space from string "<<endl<<removeSpaces(str)<<endl;
    return 0;

}
