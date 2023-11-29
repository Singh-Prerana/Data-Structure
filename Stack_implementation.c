#include<stdio.h>
# define size 5
int stack[size],top=-1,choice=0;
int isEmpty();
int isfull();
int pop();
int push(int item);
int show();
void main(){
    int item;
    printf("Enter the choice");
    printf("\n 1.PUSH\n 2. POP\n3.PEEK\n4.SHOW\n5.QUIT");
    while (choice!=5){
        printf("\nEnter the choice:\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            
                printf("Enter the element you want to push\t");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                show();
                break;
        }
    }
}

int isEmpty(){
    if (top==-1){
        return 1; 
    }
    else{
        return 0;
    }
}
int isfull(){
    if (top+1==size){
        printf("overflow");
        return 1;
    }
    else
        return 0;
}
int push(int item){
    if(isfull()){
        return 0;
    }
    else{
        top++;
        stack[top]=item;
        return 1;
    }
}
int pop(){
    if(isEmpty()){
        printf("underflow");
        return 0;
    }
    else{
        int a=stack[top];
        top--;
        printf("the pushed element is %d\n",a);
        return 1;
    }
}
int peek(){
    if(isEmpty()){
        return 0;
    }
    else{
        int a=stack[top];
        printf("The element at the top is %d\n",a);
        return 1;
    }
}
int show(){
    if(isEmpty()){
        return 0;
    }
    else{
        for(int i=0;i<=top;i++){
            printf("element at index %d is %d\n",i,stack[i]);
        }
    }
}