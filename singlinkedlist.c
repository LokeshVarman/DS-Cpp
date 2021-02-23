#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *Start=NULL;

void createList(int data)
{
  struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  struct Node *t=NULL;
  temp->data=data;
  temp->next=NULL;
  if(Start == NULL)
  {
    Start=temp;
  }
  else
  {
    t=Start;
    while(t->next!=NULL)
    {
      t=t->next;
    }
    t->next=temp;
  }
}




void menu()
{
  printf("--------Menu---------\n");
  printf("1. create list(insert at end)\n");
  printf("2. Delete from beginning\n");
  printf("3. Print List\n");
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
       createList(data);
      break;
    case 2:
      check=isEmpty();
      if(check!=1)
      {
        data=deleteFrombegining();
        printf("%d is removed from the list\n",data);
      }
      else{
        printf("list is empty\n");
      }
      break;
    case 3:
      check=isEmpty();
      if(check!=1)
      {
        printList();
      }
      else{
        printf("List is empty\n");
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