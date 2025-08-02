#include<stdio.h>
#include<conio.h>
void main()
{

    int i,sum=0,n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    printf("FIRST n NATURAL NUMBERS\n");
    for(i=1;i<=n;i++)
    {

        printf("%d\n",i);
        sum=sum+i;

    }
printf("THE VALUE OF SUM IS %d\n",sum);
getch();
}
