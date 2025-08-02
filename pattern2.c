#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,j;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            if(i==j)
            printf("%d ",i);
            else
            printf("* ");
        }
        printf("\n");
    }
    getch();
}





