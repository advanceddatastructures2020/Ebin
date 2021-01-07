#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a,n,number[30];
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the elements of an array:");
for(i=0;i<n;++i)
scanf("%d",&number[i]);
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the sorted array is\n");
for(i=0;i<n;++i)
printf("%d",number[i]);
getch();
}


