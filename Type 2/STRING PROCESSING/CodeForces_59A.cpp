#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,u=0,l=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>64 &&s[i]<91)
            u++;
        else
            l++;
    }
    if(u>l)
    {
        printf("%s",strupr(s));
    }
    else
    {
        printf("%s",strlwr(s));
    }
}
