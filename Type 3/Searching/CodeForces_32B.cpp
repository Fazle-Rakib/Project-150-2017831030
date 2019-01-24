#include <stdio.h>
int main()
{
    int ara[5][5];
    int i,j,r,c,a=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                //c=i;
                //r=j;
                for(c=i,r=j;c<2||r<2;c++,r++)
                {
                    if(c<2)
                    {
                        a++;
                    }
                    if(r<2)
                    {
                        a++;
                    }

                }
                for(c=i,r=j;c>2||r>2;c--,r--)
                {
                    if(c>2)
                    {
                        a++;
                    }
                    if(r>2)
                    {
                        a++;
                    }
                }

            }

        }
    }
    printf("%d",a);
}
