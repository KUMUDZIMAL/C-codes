#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,j;
    printf("enter middle row number");
    scanf("%d",&n);
    //upperhalf
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
            printf("  ");//2 spaces
        for(j=1;j<=i;j++)
            {
                printf("*   ");//3 spaces
            }
        printf("\n");

    }
       for(i=n-1;i>=1;i--)
    {

        for(j=1;j<=n-i;j++)
            printf("  ");//2 spaces
        for(j=1;j<=i;j++)
            {
                printf("*   ");//3 spaces
            }
        printf("\n");

    }

    getch();
}
