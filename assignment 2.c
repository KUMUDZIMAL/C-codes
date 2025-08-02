#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float a,b,c,r1,r2,e;
 printf("Enter the value of a,b,c\n");
scanf("%f %f %f", &a,&b,&c);
e=b*b - 4*a*c;
if (e>0)
{
r1 = -b+sqrt (e) / (2*a);
r2 = -b-sqrt (e) / (2*a);
 printf("roots are real and unequal:%.2f %.2f\n",r1,r2);
}
else if (e==0)
 {
r1 = -b/(2*a);
r2 = -b/(2*a);
 printf("roots are real and equal:%.2f %.2f\n",r1,r2);
}
 else
printf("roots are imaginary");
getch();
return 0;
}







