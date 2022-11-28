#include<stdio.h>
int queue[20];
int front=-1;
int rear=-1;
 void enqueue(){
     int x;
     printf("Enter");
     scanf("%d",&x);
 if(rear==19){
    printf("Queue is full");
 }
 else if((front==-1) && (rear==-1)){
    front=0;
    rear=0;
    queue[rear]=x;

 }
 else{
     rear++;
     queue[rear]=x;
 }
 }



 int dequeue(){
 if(front>rear || rear==-1){
    printf("Underflow");
 }
 else if(front==rear){
    front=rear=-1;
 }
 else{
    front++;
 }
 }

 void display(){
 int i=0;
 if( front >rear || rear==-1){
    printf("Queue is empty");
 }
 else
 for(i=front;i<=rear;i++){
    printf("%d \n",queue[i]);
 }
 }

 int main(){
 int choice;
 printf("Choices\n");
 printf("1.Enqueue\n2.Dequeue\n3.Display\n");
 do{
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;

    case 3:
        display();
        break;
    }
 }
  while(choice<=3);
  return 0;
 }
