#include<iostream>
using namespace std;
int main(){
    int erp;
    cin>>erp;
    if(erp>=30 && erp<=100){
        if(erp>=30 && erp<=50)
        cout<<"D"<<endl;
        else if(erp<=60)
        cout<<"C";
        else if(erp<=80)
        cout<<"B";
        else
        cout<<"A";
    }
}