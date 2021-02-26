#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insert(int newdata){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=newdata;
    newnode->next=head;
    head = newnode;
}
void display(){
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
    insert(2);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    display();
    return 0;
}