#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[100];
    //char str2[100];
    
    cin>>str1;
    //cin>>str2;

    for(int i=0;str1[i]!='\0' ; i++){
        if(str1[i]!=' ' && str1[i]!=',')
        str1[i]=str1[i]+5;
    }
    cout<<str1<<endl;

}
