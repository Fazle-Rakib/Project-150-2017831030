#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i1;
    cin >> n;
    vector <int> a;
    vector <int>::iterator it;
    for(int i = 0; i < n; i++)
    {
        cin >> i1;
        a.push_back(i1);
    }
    sort(a.begin(),a.end());
    int f = 0,j = 0;
    while(j < n-2)
    {
        if(a[j] + a[j+1] > a[j+2])
        {
            f = 1;
            break;
        }
        j++;
    }
    if(f == 1)
    {
        printf("YES\n");
    }
    else
        {
           printf("NO\n");
        }

}
