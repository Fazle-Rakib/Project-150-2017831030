#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    for(int x = 1; x <=n; x++)
    {
        string str;
        getline(cin,str);
        int l,c = 0;
        l = str.length();
        sort(str.begin(),str.end());
        string str1;
        str1[0] = str[0];
        int d = 0;
        cout << "Case " << x << ": ";
        for(int i = 0; i < l; i++)
        {
            while (str1[0] == str[i])
            {
                c++;
                i++;
            }
            i--;
            int f =0;
            for (int j = 2; j <= c/2;j++)
            {
                if( c%j == 0)
                {
                    f = 1;
                }
            }
            if( f == 0 && c != 1)
            {
                cout << str1[0];
                d = 1;
            }
            str1[0] = str[i+1];
            c = 0;
        }
        if(d == 0)
        {
            cout << "empty";
        }
        cout << endl;
    }
}
