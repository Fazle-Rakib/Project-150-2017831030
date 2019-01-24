#include <stdio.h>
int main()
{
    int n,i,l;
    int array [4],s;
    l=0;
    for (i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<4;i++)
    {
        for(n=i+1;n<4;n++)
        {
            if(array[i]== array[n])
            {
                l++;
            }
        }
            if(i==0 && l>=3)
            {
                l=3;
                break;
            }
            else if(i==1 && l>=2)
            {
                l=2;
                break;
            }

    }

    printf("%d",l);
}
