#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,n;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+96);
        }
        printf("\n");

    }
    getch();
}
