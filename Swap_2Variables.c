#include<stdio.h>

int main()
{
int a,b;
printf("Enetr two number for swap: ");
scanf("%d%d",&a,&b);
puts("........Before swap...........");
printf("A: %d  B: %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
puts("........After swap...........");
printf("A: %d  B: %d\n",a,b);

}
