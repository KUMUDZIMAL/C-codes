#include<stdio.h>
#include<conio.h>

void main()
{

    int i,j,rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);
    for(i=1;i<=rows;i++)
    {

        for(j=1;j<=cols;j++)
        {

            printf("*");

        }
        printf("\n");
    }
getch();
}
