#include <iostream>
using namespace std;
int main()
{
    int n, a[100], i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}