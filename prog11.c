#include<stdio.h>
#include<conio.h>
void main()
{

    int n1,n2,a,b,hcf,lcm;
    printf("ENTER TWO NUMBERS");
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(a!=b)
    {

        if(a>b)
            a=a-b;
        else
            b=b-a;

    }
hcf=a;
lcm=n1*n2/hcf;
printf("HCF=%d\n",hcf);
printf("lcm=%d",lcm);
getch();
}

