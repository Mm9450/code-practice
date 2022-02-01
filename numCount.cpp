#include <iostream>
using namespace std;

int getCount(long long int n, int k)
{
    int count = 0;
    while (n != 0)
    {
        if ((n % 10) != k)
        {
            count++;
            n = n / 10;
        }
    }
    return count;
}

int main()
{
    long long int n;
    int k;
    cin >> n;
    cin >> k;
    int ans = getCount(n, k);

    cout << "Number of count is =" << ans << endl;
    return 0;
}