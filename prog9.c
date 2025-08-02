//153,371,370
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,x,digit,sum=0;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {

        digit=n%10;
        sum=sum+ digit*digit*digit;
        n=n/10;

    }
if(sum==x)
{
    printf(" %d is a armstrong number",x);

}
    else{
           printf(" %d is  not a armstrong number",x);
    }
getch();
}
