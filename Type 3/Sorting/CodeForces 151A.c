#include <stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    int i,j,m;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    i=(k*l)/(n*nl);
    j=(c*d)/n;
    m=(p/(n*np));
    if(i<j&&i<m)
    printf("%d",i);
    else if(j<i&&j<m)
        printf("%d",j);
    else
        printf("%d",m);
    return 0;
}
