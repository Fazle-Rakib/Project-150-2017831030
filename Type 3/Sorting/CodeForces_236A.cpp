#include <stdio.h>
int main()
{
    char array[100],s;
    int i,j,x,y,a;
    gets(array);

    for(i=0;array[i]!='\0';i++)
        a=i+1;
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                s=array[j];
                array[j]=array[j+1];
                array[j+1]=s;
            }
        }
    }
}
