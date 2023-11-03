#include<stdio.h>
void main(){
    int num=1;
    char*ptr=(char*)&num;
    if(*ptr){
        printf("Little Endian");
    }
    else{
        printf("Big Endian");
    }
}