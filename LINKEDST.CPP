#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define capacity 1000
struct stack
{
int data;
struct stack *next;
} *top;
int size=0;
void push(int element);
int pop();

void main()
{
int choice, data;
while(1)
{
printf("------------------------------\n");
printf("stack implementation program\n");
printf("------------------------------\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.size\n");
printf("4.exit\n");
printf("------------------------------\n");
printf("enter the choice:");

scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter data to push into stack:");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
if(data!=INT_MIN)
printf("data=> %d\n",data);
break;
case 3:
printf("stack size:%d\n",size);
break;
case 4:
printf("exiting from app...\n");
exit(0);
break;
default:
printf("invalid choice,please try again.\n");
}
printf("\n\n");
}
getch();
}
void push(int element)
{
struct stack * newNode = (struct stack *)malloc(sizeof(struct stack));;
if(size>=capacity)
{
printf("stack overflow,can't add more elements to the stack.\n");
return;
}
newNode->data=element;
newNode->next=top;
top=newNode;
size++;
printf("data pushed to the stack:\n");
}

int pop()
{
int data=0;
struct stack*topnode;


if(size<=0||!top)
{
printf("stack is empty.\n");
return INT_MIN;
}
topnode=top;
data=top->data;
top=top->next;
free(topnode);
size--;
return data;
}