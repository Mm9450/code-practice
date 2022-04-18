#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double s;
    double t;
    int n;
    cin>>s>>t>>n;
    double r = t/s;
    double a = s/r;
    double result = a*pow(r,n-1);
    cout<<result;
}