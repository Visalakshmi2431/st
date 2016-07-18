#include<stdio.h>
#include<conio.h>
int main()
{
int a;
char i[8];
clrscr();
printf("enter the number:");
scanf("%s",i);
a=atoi(i);
printf("string conversion is:%d",a);
getch();
return 0;
}
