#include<iostream>
using namespace std;
int main(){
    char text[1000];
    cin>>text;
    int i=0,c=0;
    while(text[i]!='\0'){
        if(!((text[i]>='a'&& text[i]<='z')||(text[i]>='A'&&text[i]<='Z')||(text[i]>='1'&&text[i]<='9')))
        c++;
        i++;
    }
    cout<<c<<endl;
}