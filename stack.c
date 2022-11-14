#include<stdio.h>

int top,i,choice;
int stack[10];
 int top=-1;
void push(void);
void pop(void);
void display();

int main(){


    printf("\n1.Push\n2.Display\n3.Pop\n");
    do{
        printf("\nenter the choice\n");
        scanf("%d",&choice);
switch(choice){

case 1:

printf("push operation\n");
push();
break;

case 2:
printf("display elements\n");
display();
break;

case 3:
    printf("pop\n");
    pop();
    break;
default:
    printf("wrong choice");

 }
    }
    while(choice<=3);
return 0;
}
void push(void){
    int n;
if(top>=9){
    printf("stack is full");
}
else{
        scanf("%d",&n);
    top++;
    stack[top]=n;
 }
}
 void display(){
 for(i=top;i>=0;i--){
 printf("%d",stack[i]);}
 }
   void pop(void){
       if(top<=-1){
            printf("underflow");}
       else{
        top--;
       }}