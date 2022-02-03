#include<iostream>
using namespace std;

void solve(string str , int length){
    int vowel=0 ,consonent=0,whitespace=0;

    for(int i=0;i<length;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowel++;
    
    else if(str[i]>='a'&&str[i]<='z')
        consonent++;
    
    else if(str[i] ==' ')
    whitespace++;

}
cout<<"vowel is "<<vowel<<endl;
cout<<"consonent is "<<consonent<<endl;
cout<<"whitespaces is"<<whitespace<<endl;
}




int main(){
    string str ="Take u forward is awesome";
    int length = str.length();
    solve(str,length);
    return 0;
}