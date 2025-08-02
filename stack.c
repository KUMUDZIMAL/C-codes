#include<stdio.h>
#include<conio.h>
# define  max  10
    int queue[max],front=-1,rear=-1;

void enque();
void deque();
void display();

void main(){
int choice;
    printf("ENTER YOUR CHOICE");
    scanf("%d",&choice);
    do{
    switch(choice){
 case 1: {
 enque();
 break;

 }
  case 2: {
 deque();
break;
 }
  case 3: {
 display();
break;
 }
  case 4: {
 break;
 }
 default:{
     printf("invalid choice");
 }

    }
    }
    while(choice!=5);
    getch();
}
void enque(){
    int num;
        printf("ENTER DATA");
        scanf("%d",&num);
    if(front==0&&rear==max-1){
            printf("QUEUE IS FULL");
    }
    else{


            if(front==-1&&rear==-1){
                    front=rear=0;
                    queue[rear]=num;
            }
            else if(front!=0&&rear==max-1){
                    rear=0;
            queue[rear]=num;
            }
else{
        rear++;
queue[rear]=num;
}
    }
}
void deque(){
    if(front==-1&&rear==-1){
            printf("QUEUE IS EMPTY");
    }
    else{
            printf("THE DELETED ELEMENT IS %d",queue[front]);
            if(front==rear){
                front=rear=-1;
            }
    else if(front==max-1){
            front=0;
    }
    else{
            front ++;
    }
}
void display(){
    int i;
    if(front ==-1&&rear==-1)
{
    printf("QUEUE IS EMPTY");
}
else{
        if(front<=rear){
                for(i=front;i<=rear;i++){
                     printf("%d\n",queue[i]);
                }
        }
                else{
                for(i=front;i<max;i++){
                        printf("%d\n",queue[i]) ;
                }
                for(i=0;i<=rear;i++){
                           printf("%d\n",queue[i]);
                }
                }
        }
}
}
