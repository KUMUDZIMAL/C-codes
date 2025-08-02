#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,j;
    printf("enter largest number in pattern");
    scanf("%d",&n);
    //upperhalf
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
            printf("  ");//2 spaces
        for(j=1;j<=i;j++)
            {
                printf("%d " ,j);//1 spaces
            }
            for(j=i-1;j>=1;j--)
            {

                printf("%d ",j);//1 space
            }
        printf("\n");

    }
       for(i=n-1;i>=1;i--)
    {

        for(j=1;j<=n-i;j++)
            printf("  ");//2 spaces
        for(j=1;j<=i;j++)
            {
                printf("%d ",j  );//1 spaces
            }
            for(j=i-1;j>=1;j--)
            {
                printf("%d ",j);//1 spaces
            }
        printf("\n");

    }

    getch();
}
