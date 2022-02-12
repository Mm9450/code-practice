#include<iostream>

using namespace std;

void removeVowel(char *str){
    int count =0;
    for(int i=0;str[i];i++){
        //if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'||str[i]!=' ')
        if(str[i]!=' ')
        str[count++]=str[i];

        str[count]='\0';

    }
    

}
int main(){
    char str[] = " geek for geeks for everyone";

    removeVowel(str);
    cout<<str;
    return 0;

}