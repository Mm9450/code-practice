
#include<iostream>
using namespace std;
int main(){
    string s = "aghafs@# jagds@# $# ";
 //   cin>>s;
    int i=0,c=0;
    while(s[i]){
       // if(!((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||(s[i]==' ')))
        if((int(s[i])>=32&&int(s[i])<=47|| (s[i])>=58 &&int(s[i])<=64||int(s[i])>= 91&&int(s[i])<= 96 ||int(s[i])>= 123&&int(s[i])<= 126) && int(s[i]) != 32){
              c++;
              cout<<s[i]<<endl;
        }
        i++;
    }

    cout<<c<<endl;
}