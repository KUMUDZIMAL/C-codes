//25352,121,11211

#include<stdio.h>
#include<conio.h>
void main()
{
int x,n,rev=0,digit;
 printf("ENTER A NUMBER:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {

        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
if(rev==x)
{
    printf(" %d is a palindrome number",x);

}
    else{
           printf(" %d is  not a palindrome  number",x);
    }
getch();
}
