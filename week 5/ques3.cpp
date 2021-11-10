#include <iostream>
using namespace std;

void print(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int n, m;
    //cout << "Enter size of first array : ";
    cin >> n;
    //cout << "Enter the first array : ";
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
   // cout << "Enter size of second array : ";
    cin >> m;
   // cout << "Enter the second array : ";
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    print(a, b, n, m);
    cout << endl;
    return 0;
}