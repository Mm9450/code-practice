#include <iostream>
using namespace std;
int main()
{
    int num1 = 3, num2 = 6;

    int ans;

    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    cout << "GCD of two numbers are = " << ans << endl;
}