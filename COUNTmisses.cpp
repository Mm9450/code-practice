#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,c=0;
    while(s[i]){
        if(!('a'>=s[i]&&'z'<=s[i])||('A'>=s[i]&&'Z'<=s[i])||(' '==s[i])||('0'>=s[i]&&'9'<=s[i]))
        c++;
        i++;
    }

    cout<<c<<endl;

}