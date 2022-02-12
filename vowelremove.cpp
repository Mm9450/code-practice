#include<iostream>

using namespace std;

void removeVowel(char *str){
    int count =0;
    for(int i=0;str[i];i++)
    {   
       if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!= ' ')
       {
          str[count++]=str[i];
       }
        
    }
    str[count]='\0';
}


int main(){
    char str[] = "baba ramdev ";

    removeVowel(str);
    cout<<str;

    return 0;

}


//if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
       // if(str[i]!='a'&&str[i]!='u')