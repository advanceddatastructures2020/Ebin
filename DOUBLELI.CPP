#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void main()
{
int choice=0;
clrscr();
while(choice !=9)
{
printf("\n************main menu*********\n");
printf("choose one option from following list\n");
printf("\n1.insertion in beginning\n2.insert at last\n3.insert at any random location\n4.exit\n");
printf("enter your choice?\n");
scanf("\n%d",&choice);
switch(choice)
{
case 1:
insertion_beginning();
break;
case 2:
insertion_last();
break;
case 3:
insertion_specified();
break;
case 4:
exit(0);
break;
default:
printf("please enter valid choice:");
}
}
getch();
}
void insertion_beginning()
{
struct node *ptr;
int item;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\n enter item value");
scanf("%d",&item);

if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
ptr->data=item;
head=ptr;
}
else
{
ptr->data=item;
ptr->prev=NULL;
ptr->next=head;
head->prev=ptr;
head=ptr;
}
printf("\nNODE inserted\n");
}
}
void insertion_last()
{
struct node *ptr,*temp;
int item;
ptr=(struct node *) malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nenter value");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
head=ptr;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;}
}
printf("\nnode inserted\n");
}
void insertion_specified()
{
struct node *ptr,*temp;
int item,loc,i;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n OVERFLOW");
}
else
{
temp=head;
printf("enter the location");
scanf("%d",&loc);
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n there are less than %d elements",loc);
return;
}
}
printf("enter value");
scanf("%d",&item);
ptr->data=item;
ptr->next=temp->next;
ptr->prev=temp;
temp->next=ptr;
temp->next->prev=ptr;
printf("\nnode inserted \n");
}
}


