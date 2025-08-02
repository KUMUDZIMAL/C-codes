#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    printf("EVEN NUMBERS:\n");
    for(i=1;i<=n;i++)
    {

        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("SUM=%d\n",sum);
    printf("ODD NUMBERS:\n");
    sum=0;
     for(i=1;i<=n;i++)
    {

        if(i%2!=0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("SUM=%d\n",sum);

    getch();
     }
