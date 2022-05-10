#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    
    for (int i = a; i <= b; i++)

    {
        int temp = i;
        int flag = 0;

        for (int j = 2; j < temp; j++)
        {
            if (temp % j == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
    {
        cout << temp << endl;
    }
    }
    
}