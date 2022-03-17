#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool armstrong(int n)
{
    int originalnum = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    int sum = 0;
    int d;
    while (n != 0)
    {
        d = n % 10;
        sum += pow(d, count);
    }
    if (originalnum == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    int ans = armstrong(n);

    if (ans == true)
    {
        cout << "yes, it is a arstrong number" << endl;
    }
    else
    {
        cout << "No,it is not a arstrong number" << endl;
    }
}