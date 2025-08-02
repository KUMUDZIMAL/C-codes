
#include<stdio.h>
#include<conio.h>
void main()
{

    int a[50],n,i,sum=0;
    printf("ENTER NO OF INTEGERS\n");
    scanf("%d",&n);
    printf("enter all integers one by one\n");
    for(i=0;i<n;i++)

        scanf("%d",&a[i]);
        printf( "numbers at even indices\n");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d  ",a[i]);
            sum=sum+a[i];
        }

    }
        printf("\nSUM=%d\n",sum);
        sum=0;
        printf("numbers at odd indices\n");
          for(i=0;i<n;i++)
          {
                if(i%2!=0)
        {
            printf("%d  ",a[i]);
            sum=sum+a[i];
        }

          }
          printf("\nsum=%d",sum);
          getch();
}









