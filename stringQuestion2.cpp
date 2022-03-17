#include<iostream>
#include<string.h>
using namespace std;
string removeVowel(string str){
    
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      str = str.substr(0, i) + str.substr(i + 1);
      i--;
    }
  }
  return str;


}
int main(){
    string str = "take u forward";
    cout<<"after removing vowel from sentence"<<endl<<removeVowel(str)<<endl;
    return 0;
}