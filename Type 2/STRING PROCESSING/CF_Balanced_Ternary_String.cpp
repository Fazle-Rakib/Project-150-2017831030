#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,f = 0,Max = 0;
    cin >> n;
    string s;
    cin >> s;
    int mul = n/3;
    int ara[3] = {0};
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
        {
            ara[0]++;
        }
        else if(s[i] == '1')
        {
            ara[1]++;
        }
        else
        {
            ara[2]++;
        }
    }

    if(ara[0] == ara[1] && ara[1] == ara[2])
    {
        cout << s << endl;
        f = 1;
    }
    //cout << ara[0] << " "<< ara[1] << " " << ara[2];
    int  t0 = 0,t1 = 0,t2 = 0;
    if(f!=1)
    {
        for(int i = 0; i < n; i++)
        {
            if(ara[0] > mul && s[i] == '0' )
            {
                t0++;
                if(t0 > mul && ara[1] < mul)
                {
                    s[i] = '1';
                    ara[1] = ara[1] + 1;
                    ara[0]--;
                }
                else if(t0 > mul)
                {
                    s[i] = '2';
                    ara[2]++;
                    ara[0]--;
                }
                else
                {
                    continue;
                }
            }
            else if(ara[1] > mul && s[i] == '1')
            {
                if( ara[0] < mul)
                {
                    s[i] = '0';
                    ara[0]++;
                    ara[1]--;
                }
                else if(t1 >= mul)
                {
                    s[i] = '2';
                    ara[2]++;
                    ara[1]--;
                }
                else
                {
                    t1++;
                }
            }
            else if(ara[2] > mul && s[i] == '2')
            {
                if(ara[0] < mul)
                {
                    s[i] = '0';
                    ara[0]++;
                    ara[2]--;
                }
                else
                {
                    s[i] = '1';
                    ara[1]++;
                    ara[2]--;
                }
            }
            else
            {
                continue;
            }
        }
    }
    if(f!= 1)
    cout << s << endl;



}
