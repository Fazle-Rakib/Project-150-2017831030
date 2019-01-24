#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n][4];
    int sum[n];
    int p=1;
    for (int i =0; i<n ;i++)
    {
        sum[i] = 0;
        for ( int j = 0; j<4; j++)
        {
            cin >> array [i][j];
            sum[i] = sum [i] + array[i][j];
        }
    }
    int i,j;
    for (i = 0, j=1; j<n; j++)
    {
        if(sum[i] < sum[j])
        {
            p++;
        }
    }
    cout << p << endl;

}
