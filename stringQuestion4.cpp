#include<iostream>
#include<string.h>
using namespace std;
string removeCharacter(string str){
    for(int i=0; i<str.length();i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            str = str.substr(0,i) + str.substr(i+1);
            i--;
        }

    }
    return str;
}
int main(){
    string str = "taking u %@#&* forward";
    cout<<" after removing character from string"<<endl<<removeCharacter(str)<<endl;
    return 0;


}