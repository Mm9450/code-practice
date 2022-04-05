#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    int size = str.length();
    getline(cin,str);
    for(int i=0 ; i<size;i++){
        if(i == 0 || i==(size-1)){
            str[i]=towupper(str[i]) ;
        }
        else if(str[i]==' '){
            str[i-1]=towupper(str[i-1]);
            str[i+1]=towupper(str[i+1]);
        }
    }
     
    cout<<str<<endl;
    return 0;
}
