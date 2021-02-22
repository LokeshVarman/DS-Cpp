#include <stdio.h>
#define size 5

int queue[size];
int front=-1, rear=-1;

int isFull();
void insertInQueue(int data);
int deleteFromQueue();
int peek();
void printQueue();

int isEmpty()
{
  if (front==-1 && rear==-1)
  {
    return 1;
  }
  return 0;
}

int isFull(){
  if(rear==size-1)
  {
    return 1;
  }
  return 0;
}
void insertInQueue(int data){
  if (front==-1)
  {
    front=0;
  }
  queue[++rear]=data;
}


void insertInQueueAtBegin(int data){
  if (front==-1)
  {
    front=0;
    rear=0;
    queue[front]=data;
  }
  else{
    int i;
    for(i=rear;i>=front;i--)
    {
      queue[i+1]=queue[i];
    }
    rear++;
    queue[front]=data;
  }
}

int deleteFromQueue(){
  
  int temp=0;
  
  if(front>rear)
  {
    front=-1;
    rear=-1;
 }
 else
 {
   temp = queue[front];
  front++;
 }
  return temp;
}

int deleteFromEndOfQueue()
{
  int temp=0;
  temp=queue[rear];
  rear--;

  if(rear==-1)
  {
    front=-1;
  }
  return temp;

}


int peek(){
  return queue[front];
}

void printQueue(){
  int i;
  for(i=front;i<=rear;i++)
  {
    printf("%d,",queue[i]);
  }
}




void menu()
{
  printf("--------Menu---------\n");
  printf("1. Insert at end\n");
  printf("2. Delete from begining\n");
  printf("3. Peek\n");
  printf("4. Print queue\n");
  printf("5. Insert at begining\n");
  printf("6. Delete from end\n");
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
      check=isFull();
      if(check!=1)
        insertInQueue(data);
      else
        printf("Queue is full");
      break;
    case 2:
      check=isEmpty();
      if(check!=1)
      {
        data=deleteFromQueue();
        printf("%d is removed from the queue\n",data);
      }
      else{
        printf("queue is empty\n");
      }
      break;
      case 3:
      check=isEmpty();
      if(check!=1)
      {
        data=peek();
        printf("%d is ready to get processed from the queue\n",data);
      }
      else{
        printf("Queue is empty\n");
      }
    break;
    case 4:
      check=isEmpty();
      if(check!=1)
      {
        printQueue();
      }
      else{
        printf("Queue is empty\n");
      }
      break;
    case 5:
    printf("enter number to insert: ");
    scanf("%d",&data);
    check=isFull();
    if(check!=1)
      insertInQueueAtBegin(data);
    else
      printf("Queue is full");
    break;
    case 6:
      check=isEmpty();
      if(check!=1)
      {
        data=deleteFromEndOfQueue();
        printf("%d is removed from the queue from end \n",data);
      }
      else{
        printf("queue is empty\n");
      }
      break;
    case 0:
      printf("Exiting....");
      break;
    default:
      printf("Wrong Selection");
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