#include <iostream>
using namespace std;

int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[4] = {0, 1, 3, 3};
    cout << "first occurrence index is " << firstocc(even, 4, 3) << endl;
    cout << "last occurrence index is" << lastocc(even, 4, 3) << endl;
    return 0;
}