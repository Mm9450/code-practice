#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0; i<str.length();i++){
        if(i==0 || i==str.length()-1){
            str[i] = towupper(str[i]);
        }
        else{
            if(str[i]==' '){
                str[i-1]= towupper(str[i-1]);
                str[i+1]= towupper(str[i+1]);
            }
        }
        

        
    }
    cout<<str;
}
