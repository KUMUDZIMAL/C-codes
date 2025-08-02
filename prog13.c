#include<stdio.h>
#include<conio.h>
void main()
{

    int n,x,i,flag=0;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    x=n;
    for(i=1;i<=n/2;i++)
    {
       if(n%i==0)
        flag=flag+i;
    }
    if (flag==x)
        printf("%d is a perfect number",x);
    else
        printf("%d is not a perfect number",x);
        getch();

}
