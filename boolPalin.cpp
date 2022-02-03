#include<iostream>
using namespace std;

bool isPalindrome(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;

}


int main(){
    string str ="ABCDCBA";
    bool ans = isPalindrome(str);

    if(ans == true){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}
