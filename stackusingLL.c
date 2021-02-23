#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
};

struct Node *Start=NULL;

int Peek()
{
if(Start==NULL)
{
printf("List is empty\n");
return-1;
}
else
{
struct Node *t=Start;
int data=t->data;
return data
}
}
void printstack()
{
struct Node *t=Start;
if(t==NULL)
{
printf("List is empty\n");
}
else{
while(t!=NULL)
{
printf("%d,",t->data);
t=t->next;
}
}
}

void Push(int data)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
if (Start==NULL)
{
Start=temp;
temp->next=NULL;
}
else
{
temp->next=Start;
Start=temp;
}
}

int Pop()
{
if(Start==NULL)
{
printf("List is empty\n");
return-1;
}
else
{
struct Node *t=Start;
int data=t->data;
Start=Start->next;
free(t);
t=NULL;
return data;
}

}

void menu()
{
printf("--------Menu---------\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Print Stack\n");
printf("4. Peek\n");
printf("0. Exit\n");
printf("Enter your choice:");
}

void performOperation(int ch)
{
int data, check;
switch(ch)
{
case 1:
printf("enter number to insert: ");
scanf("%d",&data);
Push(data);
break;
case 2:
data=Pop();
if(data!=-1)
printf("%d is removed from the list\n",data);
break;
case 3:
printstack();
break;

 case 4:
data=Peek();
printf("Last element %d",data);
break;
case 0:
printf("Exiting....");
break;
}
}

int main(void) {
int ch;
do{
menu();
scanf("%d",&ch);
performOperation(ch);
}while(ch!=0);
return 0;
}