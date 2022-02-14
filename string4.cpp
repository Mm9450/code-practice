#include<iostream>
#include<algorithm>
using namespace std;
int main()
{


  string str = "HELLO";
  
  reverse(str.begin(), str.end());
  
  cout << "The reversed string is- " << str;


}