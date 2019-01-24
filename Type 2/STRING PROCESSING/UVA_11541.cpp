#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    for (int x = 1; x <= n; x++)
    {
     string str;
     getline(cin,str);
     int l,s=0;
     l = str.size();
     string str1;
     str1[0] = str[0];
     cout << "Case " << x << ": ";
     for(int i = 1; i < l; i++ )
     {
         if(str[i] >= 'A' && str[i] <='Z')
         {
             str1[0] = str[i];
             s = 0;
         }
         else
            {
                while(str[i] >= '0' && str[i] <='9' )
                {
                    s = s*10+str[i]-'0';
                    i++;
                }
                i--;
                for (int j = 0; j<s ;j++)
                {
                    cout << str1[0];
                }
            }
     }
     cout << endl;
    }
}
