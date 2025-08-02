

#include<stdio.h>
#include<conio.h>
void main()
{


    int i,j,n,r=j-n-1;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j-n-1);
        }
        printf("\n");


    }
    getch();
}
