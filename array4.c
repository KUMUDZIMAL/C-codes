//very very imp
#include<stdio.h>
#include<conio.h>
void main()
{

    int a[50],n,i,sum=0,max,min;
    printf("ENTER NO OF STUDENTS\n");
    scanf("%d",&n);
    printf("enter all marks one by one ");
    for(i=0;i<n;i++)

        scanf("%d",&a[i]);

        max=a[0];
        min=a[0];
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];

        }
        printf("AVERAGE=%d\n",sum/n);
        printf("HIGHEST=%d\n",max);
        printf("SMALLEST=%d",min);
        getch();
}


