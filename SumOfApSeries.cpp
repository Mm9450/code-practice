#include<iostream>
using namespace std;
int main(){
    float a, d,n;
    cin>>a>>d>>n;
    float sum = (n/2.0) * (2.0 * a + (n-1)*d);
    cout<<"sUM OF THE GIVEN AP SERIES IS " <<sum<<endl;
}