#include<iostream>
using namespace std;
class Quadrilateral{
    protected:
    int s1,s2,s3,s4;

};
class Rectangle: public Quadrilateral
{
    public:
    int getPerimeter(){
        return(s1+s2+s3+s4);

    }
    
    int main(void){
        Rectangle Rect;
        
        Rect.s1 = 5;
        Rect.s2 = 7;
        Rect.s3 = 5;
        Rect.s4 = 7;
        cout<<Rect.getPerimeter()<<endl;
        return 0;

    }

