#include <bits/stdc++.h>
using namespace std;
int main()
{
    string mad;
    getline(cin,mad);
    int len,t;
    len = mad.length();
    string text ="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    t = text.length();
    for(int i = 0; i < len; i++ )
    {
        int f=0;
        for(int j = 0; j < t; j++)
        {
            if(mad[i] == ' ')
               {
                   cout << " ";
                   break;
               }
            if(tolower(mad[i]) == text[j])
            {
                cout << text[j-2];
///ekhane edit korlam
            }

        }

    }
    cout << endl;


}
