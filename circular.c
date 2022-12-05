

#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
int num;
printf("ENTER NUM:");
scanf("%d",&num);
if(front==-1||rear==-1){
    front=0;
    rear=0;
    queue[rear]=num;}

    else if(front==((rear+1)%N)){

            printf("Overflow");

    }
    else{
        rear=(rear+1)%N;
        queue[rear]=num;
    }
}

void dequeue(){
    if(front==-1 || front==rear){
        printf("Underflow");

    }
    else{
        printf("the deleted element:%d",queue[front]);
        front=(front+1)%N;
    }
}

void display(){
    int i=front;
    if(front==-1 || rear==-1){
        printf("empty queue");
    }
   else{
       while(i!=rear){
        printf("%d \n",queue[i]);
        i=(i+1)%N;
       }
       printf("%d \n",queue[rear]);


}}
int main(){
int choice;
printf("MENU\n");
printf("1.ENQUEUE\n 2.DEQUEUE\n 3.DISPLAY\n");

do{
    printf("enter your choice");
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

return 0;}
























