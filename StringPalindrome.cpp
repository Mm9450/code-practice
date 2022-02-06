#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    for(int i=0;i<str.length();i++){
    if(str[i]!=str[str.length()-i-1])
    return false;
    }
    return true;
}
int main(){
    string str ="ABCDCBA";
    bool ans= isPalindrome(str);
    if(ans==true){
        cout<<"Palindrome";
        }
        else {
            cout<<"NOT PALINDROME";
        }
    
}