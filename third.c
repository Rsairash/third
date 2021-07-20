#include <stdio.h>
int main()
{
    int t1=0,t2=1,i,n,NextTerm;
    printf("Enter the number:  ");
    scanf("%d",&n);
    printf("The fibonacci series: %d,%d",t1,t2);
    NextTerm=t1+t2;

    for(i=3;i<=n;i++)
    {
        printf(",%d",NextTerm);
        t1=t2;
        t2=NextTerm;
        NextTerm=t1+t2;

    }
    return 0;

}