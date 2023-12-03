#include<stdio.h>
#define size 10
int array[size],top1=-1,top2=size;
int push1(int val1);
int push2(int val2);
int pop1();
int pop2();
int peek1();
int peek2();
void display1();
void display2();
void main(){
    int val,choice;
    printf("CHOICE LIST\n");
    printf("1.PUSH IN STACK 1\n2.PUSH IN STACK 2\n3.POP FROM STACK 1\n4.POP FROM STACK 2\n");
    printf("5.SHOW TOP ELEMENT OF STACK 1\n6.SHOW TOP ELEMENT FROM STACK 2\n7.DISPLAY ELEMENTS OF STACK 1\n8.DISPLAY ELEMENT OF STACK 2\n9.QUIT\n");
    printf("Enter the choice\t");
    scanf("%d",&choice);
    while(choice!=9){
        switch(choice){
            case 1:
                printf("Enter the element you want to push in stack 1\t");
                scanf("%d",&val);
                push1(val);
                break;
            case 2:
                printf("Enter the element you want to push in stack 2\t");
                scanf("%d",&val);
                push2(val);
                break;
            case 3:
                pop1();
                break;
            case 4:
                pop2();
                break;
            case 5:
                peek1();
                break;
            case 6:
                peek2();
                break;
            case 7:
                display1();
                break;
            case 8:
                display2();
                break;

        }
        printf("\nEnter the choice\t");
        scanf("%d",&choice);
    }
}
int push1(int val){
    if(top2==top1+1){
        printf("stack is full");
        return 0;
    }
    else{
        top1=top1+1;
        array[top1]=val;
        return 1;
    }
}
int push2(int val){
    if(top2==top1+1){
        printf("stack is full");
        return 0;
    }
    else{
        top2=top2-1;
        array[top2]=val;
        return 1;
    }
} 
int pop1(){
    if(top1<0){
        printf("The stack is empty");
        return 0;
    }
    else{
        int item=array[top1];
        top1--;
        printf("The popped value is %d",item);
        return 1;
    }
}
int pop2(){
    if(top2>=size){
        printf("The stack is empty");
        return 0;
    }
    else{
        int item=array[top2];
        top2++;
        printf("The popped value is %d",item);
        return 1;
    }
}
int peek1(){
    if(top1<0){
        printf("The stack is empty");
        return 0;
    }
    else{
        int item=array[top1];
        printf("The top element of stack 1 is %d",item);
        return 1;
    }
}
int peek2(){
    if(top2>=size){
        printf("The stack is empty");
        return 0;
    }
    else{
        int item=array[top2];
        printf("The top element of stack 1 is %d",item);
        return 1;
    }
}
void display1(){
    int i;
    if(top1<0){
        printf("The stack is empty");
        
    }
    else{
        for(i=0;i<=top1;i++){
            printf("Element at %d is %d\n",i,array[i]);
        }
        
    }
}
void display2(){
    int i;
    if(top2>=size){
        printf("The stack is empty");
        
    }
    else{
        for(i=top2;i<10;i++){
            printf("Element at %d is %d\n",i,array[i]);
        }
        
    }
}
