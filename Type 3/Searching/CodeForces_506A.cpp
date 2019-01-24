#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    char ara[n];
    cin >> ara;
    //cout << ara;
    string str,temp,r;
    str = ara;
    temp =ara;

    int i = 1;
    while (str[i] != '\0')
    {
        int p1 = i,f = 0,c = 0;
        for(int j = 0; str[i] != '\0' ; )
        {
            if(str[i] == temp[j])
            {
                //cout << "HERE" << i << endl;
                c++;
                i++;
                j++;
            }
            else
            {
               f = 1;
               break;
            }
            if(str[i-1] == temp[j-1] && str[i] == '\0' && str[i-2] != str[j-2])
            {
                f = 2;
                temp.erase(temp.begin()+0,temp.begin()+c);
                break;
            }
            if(str[i] == temp[j] && str[i+1] == '\0')
            {
                c++;
                //cout << "c" << c << endl;
                f = 2;
                temp.erase(temp.begin()+0,temp.begin()+c);
                //cout << "HERE" << endl;
                break;
            }
        }
        i = p1+1;
        if(f == 2)
        {
            break;
        }
    }
    //cout << "temp " << temp << endl;
    cout << str;
    int l1,l2;
    l1 = str.length();
    l2 = (k-1)*temp.length();
      //r = str - r;
      for(int i = 1; i < k; i++)
      {
          cout << temp;
      }
      cout << endl;
     // cout << l1+l2 <<endl;
}
