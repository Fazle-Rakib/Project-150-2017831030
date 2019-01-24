#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int array[n];
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    int a[n];
    int r=0;
    for (int i=0; i<n; i++)
    {
        int t;
        t = array[i]+r;
        r = t%m;
        a[i] = t/m;
    }
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
