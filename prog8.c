#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0,digit,sum=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    while(n!=0)
    {

        digit=n%10;
        sum=sum+ digit;
        n=n/10;
        count++;
    }

printf("NUMBER OF DIGITS =%d\n",count);
printf("SUM OF DIGITS=%d",sum);
getch();
}
