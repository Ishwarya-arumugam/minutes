#include<stdio.h>
#include<conio.h>
void  main()
{
int a,b,c,g,h,i,j;
clrscr();
scanf("%d %d",&a,&g);
printf("\nthe first time is:%d.%d",a,g);
scanf("%d %d",&b,&h);
printf("\nthe second time in hour is:%d.%d",b,h);
i=(a*60)+g;
j=(b*60)+h;
if(i>j)
{
c=i-j;
}
else
{
c=j-i;
}
printf("\nthe minutes between given number is:%d",c);
getch();
}
