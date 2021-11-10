#include <iostream>
#include <array>
using namespace std;
int check(int a[], int n, int key)
{
    int l = 0, r = n - 1, c = 0;
    while (l < r)
    {
        if (a[l] + a[r] == key)
        {
            cout << a[l] << " " << a[r] << ", ";
            c++;
        }
        if (a[l] + a[r] < key)
            l++;
        else
            r--;
    }
    return c;
}
int main()
{
    int t, i, n, key;
   // cout << "Enter the number of test casses : ";
    cin >> t;
    for (i = 0; i < t; i++)
    {
       // cout << "Enter the number of elements in array : ";
        cin >> n;
        int a[n];
        //cout << "Enter elements of array : ";
        for (int j = 0; j < n; j++)
            cin >> a[j];
        //cout << "Enter the key : ";
        cin >> key;
        sort(a, a + n);
        if (check(a, n, key) == 0)
            cout << endl << "No such pair exist.";
            else
        cout << endl;
    }
    return 0;
}