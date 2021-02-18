#include <stdio.h>
#define size 5


char stack[size];
int Top=-1;

int isEmpty()
{
if (Top==-1)
{
return 1;
}
return 0;
}

int isFull()
{
if(Top==size-1)
{
return 1;
}
return 0;
}

void push(char data)
{
stack[++Top]=data;
}

char pop()
{
char temp=stack[Top];
Top--;
return temp;
}

char peek()
{
return stack[Top];
}

void printstack()
{
int i;
for(i=0;i<=Top;i++)
{
printf("%c ", stack[i]);
}
printf("\n");
}
void menu()
{
printf("--------Menu---------\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Peek\n");
printf("4. Print stack\n");
printf("0. Exit\n");
printf("Enter your choice:");
}

void performOperation(int ch)
{
char data;
int check;
switch(ch)
{
case 1:
printf("enter Character to push");
fflush(stdin);
scanf("%c",&data);
check=isFull();
if(check!=1)
push(data);
else
printf("stack is full");
break;
case 2:
check=isEmpty();
if(check!=1)
{
data=pop();
printf("\'%c\' is removed from the stack\n",data);
}
else{
printf("stack is empty\n");
}
break;
case 3:
check=isEmpty();
if(check!=1)
{
data=peek();
printf("\'%c\' is last pushed item in the stack\n",data);
}
else{
printf("stack is empty\n");
}
break;
case 4:
check=isEmpty();
if(check!=1)
{
printstack();
}
else{
printf("stack is empty\n");
}
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