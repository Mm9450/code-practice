#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int vowel=0, consonant=0, whitespace=0;
    for(int i=0; i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            consonant++;
        }
        else if(str[i]==' '){
            whitespace++;
        }

    }
    cout<<"Vowel:"<<vowel<<endl;
    cout<<"consonant:"<<consonant<<endl;
    cout<<"whitespaces:"<<whitespace<<endl;
}