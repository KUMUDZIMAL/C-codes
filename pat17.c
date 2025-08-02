

#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,n,r=4;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%c ",i+r+64);
        }
        printf("\n");
        r--;
        r--;

    }
    getch();
}
