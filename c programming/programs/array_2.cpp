#include<stdio.h>
int main()
{
int i,a[5];

printf("Enter ur value : ");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

printf("You have entered : ");

for(i=0;i<=4;i++)
{
printf("\na[%d]=%d",i,a[i]);
}

return 0;
}
