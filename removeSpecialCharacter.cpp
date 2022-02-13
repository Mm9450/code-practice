#include<iostream>
using namespace std;

void removeSPEcharacter(char *str){
    int count = 0;
    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[count++]=str[i];
        }
        //str[i]='\0';
    }
    str[count]='\0';

    

}
int main(){
    char str[]="take12% *&u ^$#forward";
    removeSPEcharacter(str);
    cout<<str;
    return 0;
}