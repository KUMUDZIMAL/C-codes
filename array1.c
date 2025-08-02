
#include<stdio.h>
#include<conio.h>
void main()
{

    float sum=0;
    int a[50],n,i;
    printf("ENTER NO OF INTEGERS\n");
    scanf("%d",&n);
    printf("enter all integers one by one\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

        printf("average=%f",sum/n);
        getch();


}
