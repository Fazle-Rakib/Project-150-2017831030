#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>
#include <locale>

using namespace std;
int main()
{
    int n,j;
    cin >> n;
    string str[n+1];
    for (j=0; j<=n; j++)
    {
        getline(cin,str[j]);
        //cout << str[j];
    }
    for (j=1; j<=n; j++)
    {
        int f=1;
        string s;
        s = str[j];
    stack < char > s1;
    char x;
    int i;
    for (i = 0; i<s.size(); i++)
    {
        if(s[i] == '\0' )
        {
            f=1;
        }
        if(s[i] == '[' || s[i] == '(')
            {
                s1.push(s[i]);
            }
        if(s[i] == ']')
        {

            if (s1.empty() == 1)
            {
                f=0;
                break;
            }
            if (s1.top() == '[')
            {
                f=1;
                s1.pop();
            }
            else
            {
                f=0;
                break;
            }
        }
        if(s[i] == ')')
        {
            if (s1.empty() == 1 )
            {
                f=0;
                break;
            }
            if (s1.top() == '(')
            {
                f=1;
                s1.pop();
            }
            else
            {
                f=0;
                break;
            }
        }
       // cout << i << "\n";
    }
    if (!s1.empty())
    {
        f=0;
    }
    if (f==1)
    {
        cout << "Yes" << endl;
    }
    if(f==0)
    {
        cout << "No" << endl;
    }
    s.erase (s.begin(),s.end());
    }

}
