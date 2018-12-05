#include<stdio.h>
int main()
{
int a,c,b,s,d,m,sb;
 printf("Press the key for ur operation:\n\t1.Addition\n\t2.Subtraction\n\t3.multipliation\n\t4.Division\n");
 scanf("%d",&m);
switch(m)
{
    case 1:
        {
        printf("\nEnter 1st value:");
        scanf("%d",&a);
        printf("\nEnter 2nd value:");
        scanf("%d",&b);
        c=a+b;
        printf("\nSummation is : %d",c);
        break;
        }
    case 2:
    {
        printf("\nEnter 1st value:");
        scanf("%d",&a);
        printf("\nEnter 2nd value:");
        scanf("%d",&b);
        sb=a-b;
        printf("\nsummation is : %d",sb);
        break;
        }

case 3:
    {
        printf("\nEnter 1st value:");
        scanf("%d",&a);
        printf("\nEnter 2nd value:");
        scanf("%d",&b);
        m=a*b;
        printf("\nsummation is : %d",m);
        break;
        }
        case 4:
    {
        printf("\nEnter 1st value:");
        scanf("%d",&a);
        printf("\nEnter 2nd value:");
        scanf("%d",&b);
        d=a/b;
        printf("\nDivision is : %d",d);
        break;
        }
}
return 0;
}
