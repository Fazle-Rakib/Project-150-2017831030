#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int s = 0;
    int j = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i]+1 != a[i+1])
        {
            s = s + a[i+1] - a[i] -1;

        }
    }
    cout << s << endl;


}
