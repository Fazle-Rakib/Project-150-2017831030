#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,l;
    scanf("%d",&n);
    char array [100][101];
    for (i=0;i<n;i++)
    {
        scanf("%s",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        l=strlen(array[i]);
        if(l>10)
        {
            char a,b;
            a=array[i][0];
            b=array[i][l-1];
            l=l-2;
            printf("%c%d%c\n",a,l,b);
        }
        else
            printf("%s\n",array[i]);
    }
}
