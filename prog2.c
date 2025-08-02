#include<stdio.h>
#include<conio.h>
void main()
{

    int i,n,sum1=0;

    printf("enter a number\n");
    scanf("%d",&n);
    printf("EVEN NUMBERS\n");
    for(i=1;i<=n;i++)

{
    if(i%2==0)
    {

        printf("%d\n",i);
        sum1=sum1+i;
    }

}
printf("THE VALUE OF SUM IS %d\n",sum1);
printf("ODD NUMBERS\n");
sum1=0;
for(i=1;i<=n;i++)
{
    if(i%2!=0){


    printf("%d\n",i);
    sum1=sum1+i;
    }
}
printf("THE VALUE OF SUM IS %d\n",sum1);
getch();
}
