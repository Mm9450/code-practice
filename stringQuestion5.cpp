#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string str = "HELLO";
  reverse(str.begin(),str.end());

  cout<<"reversed string is"<<" "<<str;
}