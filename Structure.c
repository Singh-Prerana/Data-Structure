#include<stdio.h>
#include<conio.h>
#include<string.h>
#define Maxbook 10
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
struct book{
    char title[50];
    char author[50];
    int pages;
    float price;
};
/*void main(){
    struct book book1,book2;
    printf("Enter title,author name ,page and price of the book\n");
    strcpy(book1.title,"OOPs");
    strcpy(book1.author,"Reema Thakreja");
    scanf("%d %f",&book1.pages,&book1.price);
    
    printf("Enter the title,author name,pages and price of book 2\n");
    strcpy(book2.title,"Programming in C");
    strcpy(book2.author,"Anita Goel");
    printf("input page and price");
    scanf("%d %f",&book2.pages,&book2.price);
    printf("%s by %s",book2.title,book2.author);
    // printf("size of type struct First is %d\n",sizeof(struct First));
    // printf("size of type struct Second is %d",sizeof(struct Second));
}*/

int main(){
    struct book library[Maxbook];
    int count=0,i;
    char ch;
    while(1){
        
    }
}