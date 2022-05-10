#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindrome(string str){
    for(int i=0; i<str.length()/2;i++){
        if(str[i]!=str[str.length()-1-i]){
            return false;
        }
        return true;
    }
}
int main(){
    string str;
    getline(cin,str);
    bool ans = isPalindrome(str);
    if(ans==true){
        cout<<"it is palindrome"<<endl;                                                                                                                                           
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}