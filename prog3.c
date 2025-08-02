#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1,i;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        f=f*i;

    }
printf("the value of factorial of %d is %d\n",n,f);
getch();
}
