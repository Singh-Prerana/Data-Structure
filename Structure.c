#include<stdio.h>
struct First{
    char a;
    int b;
    char c;
    
};
struct Second{
    char d;
    char e;
    int f;
};
void main(){
    printf("size of type struct First is %d\n",sizeof(struct First));
    printf("size of type struct Second is %d",sizeof(struct Second));
}