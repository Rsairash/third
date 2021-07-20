#include <stdio.h>
int matrix();
int fibonacci();
int main()
{
    int n;
    printf("choose the program: \n \
    1. want to print fibonacci. \n \
    2. want to sum two matrix. \n");
    scanf("%d",&n);

    switch (n)
    
    {
    case 1:
        fibonacci();
        break;
    case 2:
        matrix();
        break;
    
    default:
        break;
    }
    return 0;

}

int matrix()
{
    int i,j,n,a[10][10],b[10][10],sum[10][10];
    int row,column;
    printf("\nEnter the row and column: \n \
Row: ");
    scanf("%d",&row);
    printf("Column: ");
    scanf("%d",&column);

    printf("Enter the elements of first matrix:\n");

    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");

    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix are: \n");
    printf("First matrix\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix: \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of matrix is \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j]= a[i][j]+b[i][j];
            printf("\t%d",sum[i][j]);
        }
        printf("\n");
    }
    
}
int fibonacci()
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
}