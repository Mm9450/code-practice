#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    for(int i=0 ; i<str.length()/2; i++){
        if(str[i]!=str[str.length()-i-1]){
            cout<<"ït is a palindrome "<<endl;
        }
        else{
            cout<<"it is not a palindrome"<<endl;
        }
    }

}