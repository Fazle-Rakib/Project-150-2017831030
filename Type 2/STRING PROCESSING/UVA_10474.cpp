#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,l = 1;
    while(1)
    {
        cin >> n >> q;
        if(n == 0 && q == 0)
        {
            break;
        }
        vector <int> aran,araq;
        vector <int>::iterator it1;
        int i1,i2;
        for(int i = 0; i < n; i++)
        {
            cin >> i1;
            aran.push_back(i1);
        }
        sort(aran.begin(),aran.end());
        for(int i = 0; i < q; i++)
        {
            cin >> i2;
            araq.push_back(i2);
        }
        cout << "CASE# " << l << ":\n";
        int  j = 0;
        while(j < q)
        {
            int i = 0,f = 0;
            while(i < n)
            {
                if(aran[i] == araq[j])
                {
                    f =1;
                    break;
                }
                i++;
            }
            if(f == 1)
            {
                cout << araq[j] << " found at " << i+1 << endl;
            }
            else
            {
               cout << araq[j] << " not found" << endl;
            }
            j++;

        }
        l++;
    }
}
