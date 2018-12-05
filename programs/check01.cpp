#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter 1st line of triangle : ");
scanf("%f",&a);
printf("Enter 2nd line of triangle : ");
scanf("%f",&b);
printf("Enter 3rd line of triangle: ");
scanf("%f",&c);

((a||b||c)!=0&&(a+b)>c&&(a+c)>b&&(b+c)>a)?printf("Okey,It's a triangle"):printf("No,it's not a triangle");

return 0;
}
