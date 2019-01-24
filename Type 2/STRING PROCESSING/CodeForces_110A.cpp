#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    int i,t=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='4')
        {
            t++;
        }
        if(s[i]=='7')
        {
            t++;
        }
    }
    if(t==4 || t==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
